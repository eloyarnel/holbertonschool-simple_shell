#include "shell.h"

/**
 * get_line - function that gets user input and deals with EOF
 * Return: user input
 */

char *get_input(void)
{
char *line = (void *)0;
size_t len = 0;
ssize_t nread;

nread = getline(&line, &len, stdin);

if (nread== -1)
{
free(line);
return ((void *)0);
}

return (line);
}
