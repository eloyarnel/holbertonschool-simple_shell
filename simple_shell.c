#include "shell.h"

/**
 * main - function that runs simple shell's logic
 * @argc: number of arguments given
 * @argv: list of arguments given
 * Return: 0 on success or NULL on fail
 */

int main(int argc, char **argv)
{
char *line = NULL;
char **args = NULL;

(void)argc;
(void)argv;

while (1)
{
print_prompt();
line = read_input();
if (!line)
{
break;
}

args = strtoken(line);
if (args)
{
run_command(args);
}
free(line);
free_args(args);
}
return (0);
}
