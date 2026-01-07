#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#define MAX_INPUT 1024
#define MAX_ARGS 64

void print_prompt(void);
char *get_input(void);
char **strtoken(char *line);
void run_command(char **args);
void free_args(char **args);

#endif /*SHELL_H*/
