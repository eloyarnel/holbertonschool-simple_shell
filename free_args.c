#include "shell.h"

/**
 * free_args - function that frees all arguments provided from stdin
 * @args: pointer to array of strings that contain all arguments being freed
 * Return: void
 */

void free_args(char **args)
{
    if (!args)
        return;

    free(args);
}
