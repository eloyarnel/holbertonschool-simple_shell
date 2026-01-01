#include "shell.h"

/**
 * strtoken - function that divides string given into tokens
 * @line: string obtained from user input
 * Return: an array of strings called args or NULL on fail
 */

char **strtoken(char *line)
{
char **args;
char *token;
char *d = " ,\n";
int i = 0;

args = malloc(sizeof(char *) * MAX_ARGS);
if (!args)
{
return ((void *)0);
}
token = strtok(line, d);
while (token != (void *)0)
{
args[i++] = token;
token = strtok((void *)0, d);
}
args[i] = (void *)0;

return (args);
}
