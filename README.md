# Libft

Libft is a foundational project from the 42 curriculum focused on building a custom C library from scratch.
The goal of the project is to reimplement essential standard C library functions and create additional utility functions that can be reused in future C projects.

## About the Project

In this project, I implemented my own versions of common C functions for string manipulation, memory handling, character checks, conversions, and linked list operations.
The project helped me strengthen my understanding of low-level programming concepts such as pointers, dynamic memory allocation, memory safety, and modular code organization.

## What I Learned

* Working with pointers and memory addresses in C
* Implementing standard library-like functions from scratch
* Dynamic memory allocation using `malloc` and `free`
* String and memory manipulation
* Creating and using a static library
* Writing and maintaining a `Makefile`
* Following the 42 coding standard with Norminette

## Technologies Used

* C
* Makefile
* Git
* Norminette

## Features

The library includes functions for:

* Character checks and conversions
* String manipulation
* Memory manipulation
* File descriptor output functions
* Dynamic memory allocation helpers
* Linked list utilities

## Build

To compile the library, run:

```bash
make
```

This creates the static library:

```bash
libft.a
```

Other available commands:

```bash
make clean
make fclean
make re
```

## Usage

Include the header file in your C project:

```c
#include "libft.h"
```

Compile your project together with the library:

```bash
cc main.c -L. -lft
```

## Project Status

Completed as part of the 42 Wolfsburg curriculum.
::: 
