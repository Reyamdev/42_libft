# 42_libft
42 core libft.h, C core library project.
# Libft

*This project has been created as part of the 42 curriculum by rimayer.*

## Description

Libft is a foundational project in the 42 Core Curriculum.

The goal of the project is to recreate a selection of standard C library functions and compile them into a reusable static library called `libft.a`.

The project focuses on core C programming concepts such as:

* pointers
* memory management
* string manipulation
* character handling
* data types
* linked lists
* function pointers
* file descriptors
* static libraries
* Makefiles
* writing reusable and consistent C code

The functions are implemented from scratch without calling the original libc functions they reproduce.

The library is divided into three main parts:

* Part 1: recreations of common libc functions
* Part 2: additional string, memory, conversion, and output functions
* Part 3: linked-list creation, traversal, modification, and cleanup functions

## Instructions

### Compilation

Clone the repository:

```bash
git clone https://github.com/Reyamdev/42_libft.git
cd 42_libft
```

Compile the library with:

```bash
make
```

This generates:

```text
libft.a
```

Other available Makefile rules:

```bash
make clean
```

Removes object files.

```bash
make fclean
```

Removes object files and `libft.a`.

```bash
make re
```

Rebuilds the library from scratch.

### Usage

Include the header in your C source file:

```c
#include "libft.h"
```

Compile your program together with the library:

```bash
cc main.c libft.a -o program
```

Run it with:

```bash
./program
```

## Resources

Useful references for this project include:

* C standard library documentation
* `man` pages for libc functions
* The 42 Libft subject
* ASCII table references

AI was used as a learning and review aid during the project.
It was used for:

* explaining C concepts such as pointers, memory ownership, linked lists, function pointers, and file descriptors
* suggesting tests and edge cases for different functions
* clarifying compiler and linker errors
* improving comments and documentation

The implementations themselves were developed and corrected iteratively rather than copied from complete AI-generated solutions.
