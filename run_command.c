#include "shell.h"

/**
 * run_command - function that runs the command given in
 * args[0] along with its arguments if any
 * @args: pointer to an array of strings that have all arguments given
 * Return: void 
 */
void run_command(char **args)
{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
execve(args[0], args, environ);
perror("execve");
exit(1);
}
else if (pid > 0)
{
wait(&status);
}
}
