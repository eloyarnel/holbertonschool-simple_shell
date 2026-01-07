#include "shell.h"

/**
 * free_args - function that frees all arguments provided from stdin
 * @args: pointer to array of strings that contain all arguments being freed
 * Return: void
 */

void free_args(char **args)
{
int i = 0;

if (args == NULL)
return;

while (args[i] != NULL)
{
if (args[i] != NULL)
free(args[i]);
i++;
}

free(args);
}
