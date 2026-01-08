# Simple Shell Project

## Description

The Simple Shell project is a basic UNIX command line interpreter written in C.
It replicates core behaviors of the standard shell, allowing users to execute
commands, interact with the operating system, and manage processes.

The shell reads input from standard input, separates it into tokens, resolves
commands using the PATH environment variable, executes them using `fork` and
`execve`, and waits for the process to complete before displaying the prompt
again.



---

## Features

- Displays a custom prompt and waits for user input
- Executes commands with or without arguments
- Searches for executables using the `PATH` environment variable
- Handles built-in commands
- Handles the End Of File condition (`Ctrl + D`)
- Proper error handling for invalid commands

---

## Built-in Commands

| Command | Description |
|--------|------------|
| `exit` | Terminates the shell |
| `env`  | Prints the current environment variables |

---


### Compilation

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell
```

## Authors

- [Eloy A. Alicea Sanchez](https://github.com/eloyarnel)
- [Natanael Ortiz Lugo](https://github.com/Fooxii)

