#include <stdio.h>              /* Standard I/O library for printf and fgets */
#include <string.h>             /* String handling library for strcmp */
#include <unistd.h>             /* POSIX library (commonly used in shells) */

#define MAX_INPUT 1024          /* Defines the maximum size of user input */

int main()                      /* Entry point of the program */
{
    char input[MAX_INPUT];     /* Buffer to store user input */

    while (1)                  /* Infinite loop to keep the shell running */
    {
        printf("simple_shell:$"); /* Displays the shell prompt */
        fflush(stdout);        /* Flushes output buffer to show prompt immediately */

        if (fgets(input, MAX_INPUT, stdin) == (void *)0) /* Reads input from standard input */
        {
            perror("fgets failed"); /* Prints error message if fgets fails */
            continue;           /* Skips to the next loop iteration */
        }

        printf("%s", input);   /* Prints back the user input (echo behavior) */

        if (strcmp(input, "exit\n") == 0) /* Compares input to "exit\n" */
        {
            break;              /* Exits the loop if user types "exit" */
        }
    }

    return (0);                 /* Ends the program successfully */
}
