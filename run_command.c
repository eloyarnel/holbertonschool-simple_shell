#include "shell.h"

/**
 * run_command - function that runs the command given
 * @args: pointer to an array of strings that have all arguments given
 * Return: void 
 */

void run_command(char **args)
{
pid_t pid;
int status;
char *cmd_path;

if (!args || !args[0])
{
return;
}

cmd_path = build_cmd_path(args[0]);
if (!cmd_path)
{
fprintf(stderr, "%s: command not found\n", args[0]);
return;
}

pid = fork();
if (pid == 0)
{
execve(cmd_path, args, environ);
perror("execve");
free(cmd_path);
exit(1);
}
else if (pid > 0)
{
wait(&status);
free(cmd_path);
}
}
