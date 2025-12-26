#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;

#define MAX_INPUT 1024
#define MAX_ARGS  64

int main(int argc, char *argv[])
{
char input[MAX_INPUT];
char *args[MAX_ARGS];
pid_t pid;
int status;
int i;

(void)argc;
(void)argv;

while (1)
{
printf("simple_shell$ ");
fflush(stdout);

if (fgets(input, MAX_INPUT, stdin) == NULL)
{
printf("\n");
break;
}

input[strcspn(input, "\n")] = '\0';

if (input[0] == '\0')
continue;

i = 0;
args[i] = strtok(input, " ");
while (args[i] && i < MAX_ARGS - 1)
{
i++;
args[i] = strtok(NULL, " ");
}
args[i] = NULL;

if (strcmp(args[0], "exit") == 0)
break;

pid = fork();
if (pid == 0)
{

if (execve(args[0], args, environ) == -1)
{
perror(argv[0]);
exit(1);
}
}
else if (pid > 0)
{

wait(&status);
}
else
{
perror("fork failed");
}
}

return (0);
}
