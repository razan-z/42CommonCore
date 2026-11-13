Libft

This project has been created as part of the 42 curriculum by rzbib.

Description

Libft is the first project in the 42 curriculum. The goal is to create a custom C library by reimplementing a set of standard C library functions and developing additional utility functions.

This project provides an opportunity to strengthen fundamental C programming skills, understand how standard library functions work internally, and gain practical experience with memory management, pointers, strings, and data structures.

The resulting library, libft.a, can be reused in future 42 projects.

Library Contents

The library is organized into three main parts:

1. Libc Functions

Reimplementations of standard C library functions, prefixed with ft_.

Character classification and conversion

ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_toupper
ft_tolower

String manipulation

ft_strlen
ft_strchr
ft_strrchr
ft_strncmp
ft_strlcpy
ft_strlcat
ft_strnstr
ft_atoi

Memory manipulation

ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_memchr
ft_memcmp

Memory allocation

ft_calloc
ft_strdup
2. Additional Functions

Utility functions that extend the functionality of the standard C library.

String manipulation

ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri

File descriptor output

ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd
3. Linked List Functions

Functions for creating and manipulating singly linked lists using the t_list structure.

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
Instructions
Compilation

Clone the repository and navigate to its directory:

bash
git clone YOUR_REPOSITORY_URL
cd libft


Compile the library using:

bash
make


This generates the static library libft.a.

Makefile Rules
Command	Description
make	Compiles the library
make all	Compiles the library
make clean	Removes object files
make fclean	Removes object files and libft.a
make re	Rebuilds the library
Using the Library

To use Libft in another C project, include its header:

c
#include "libft.h"


Compile your program by linking against the library:

bash
cc main.c -L. -lft -I. -o program

Resources

The following resources were useful for understanding, implementing, and testing the library.

Documentation
Linux Manual Pages
cppreference – C Library
Testing
libftTester – Tripouille

A third-party tester for the 42 Libft project, used to test the implemented functions and check their behavior.

AI Usage

AI tools were used as a learning aid to clarify C programming concepts, understand function behavior, and assist with structuring this documentation.

The implementation and understanding of the library remain part of the learning process of the 42 curriculum.

Author

rzbib

GitHub: YOUR_GITHUB_USERNAME
42 Login: YOUR_42_LOGIN
