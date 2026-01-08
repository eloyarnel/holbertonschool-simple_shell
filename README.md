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

## Concepts Learned

Through the development of this Simple Shell project, we gained hands-on experience with core UNIX and C programming concepts, including:

### Process creation and management
- Using `fork()` to create child processes
- Using `wait()` to synchronize parent and child processes

### Program execution
- Executing programs with `execve()`
- Passing arguments and environment variables correctly to new processes

### Environment handling
- Accessing environment variables using `environ` and `getenv()`
- Resolving executable paths using the `PATH` environment variable

### Input handling
- Reading user input from standard input
- Handling the End Of File (EOF) condition (`Ctrl + D`)

### String manipulation
- Tokenizing input strings into commands and arguments
- Building full executable paths dynamically

### Error handling
- Handling invalid commands gracefully
- Printing meaningful error messages using `perror` and low-level output functions

### Memory management
- Proper use of dynamic memory allocation (`malloc`, `free`)
- Avoiding memory leaks and invalid memory access

### System calls and low-level programming
- Working directly with UNIX system calls
- Understanding how shells interact with the operating system

This project strengthened our understanding of how a UNIX shell works internally and reinforced best practices for writing modular, maintainable C code.

### Compilation

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell
```

## Authors

- [Eloy A. Alicea Sanchez](https://github.com/eloyarnel)
- [Natanael Ortiz Lugo](https://github.com/Fooxii)
