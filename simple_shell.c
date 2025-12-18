#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define MAX_INPUT 1024
int main()
{
char input[MAX_INPUT];

while (1)
{
printf("simple_shell:$");
fflush(stdout);

if(fgets(input, MAX_INPUT, stdin) == (void *)0)
{
perror("fgets failed");
continue;
}

printf("%s", input);

if (strcmp(input, "exit\n") == 0)
{
break;
}
}

return (0);
}
