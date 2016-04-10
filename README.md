# 42 Get_next_line

Moulitest: [![Build Status](https://travis-ci.org/42dannywillems/42_get.next.line.svg?branch=master)](https://travis-ci.org/42dannywillems/42_get.next.line)

This project consist of writing a function get_next_line which get the next line
in a file.

There are some features this function must implement:
* we only use [libft](https://github.com/42dannywillems/42_libft).
* we need to implement a buffer. We can't come back in the file descriptor. We can't move in the
  file descriptor. We can only use *read*, *free*, *malloc*. No call to lseek.
* we can't use global variable.
* we can't use FILE structure. We need to create one.
* we can read multiple file descriptors at the same time (which implies a
  buffer).
* we can't have memory leaks: every malloc must be freed.
* the buffer size (use by read) can be changed.

## How to compile and test it

First, add a main.c with some tests

```Shell
make -C libft/ fclean && make -C libft
gcc -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
gcc -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
gcc -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
```
