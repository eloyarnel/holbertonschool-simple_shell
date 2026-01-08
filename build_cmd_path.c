#include "shell.h"

/**
 * build_cmd_path - builds full path for a command using PATH
 * @args: command name (e.g. "ls")
 * Return: malloc'd full path if found, or NULL
 */
char *build_cmd_path(char *args)
{
char *path_env, *path_copy, *dir, *full;
size_t len;
if (!args || args[0] == '\0')
return (NULL);

if (strchr(args, '/'))
{
if (access(args, X_OK) == 0)
return (strdup(args));
return (NULL);
}
path_env = getenv("PATH");
if (!path_env || path_env[0] == '\0')
return (NULL);
path_copy = strdup(path_env);
if (!path_copy)
return (NULL);
dir = strtok(path_copy, ":");
while (dir)
{
len = strlen(dir) + 1 + strlen(args) + 1;
full = malloc(len);
if (!full)
{
free(path_copy);
return (NULL);
}
strcpy(full, dir);
strcat(full, "/");
strcat(full, args);
if (access(full, X_OK) == 0)
{
free(path_copy);
return (full);
}
free(full);
dir = strtok(NULL, ":");
}
free(path_copy);
return (NULL);
}
