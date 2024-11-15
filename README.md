# Libft

**Libft** is a custom implementation of common C library functions. The main goal of the project is to practice low-level programming and to build reusable libraries. The **libft** library provides a collection of functions that replicate standard C functions (like those in `<string.h>` and `<stdlib.h>`) and includes additional utility functions.

## Installation

To include **libft** in your project, clone the repository and compile the library:

```bash
git clone git@github.com:shatilovdr/Libft.git
cd libft
make
```

## Usage

Include the library header in your source code:
```C
#include "libft.h"
```

Compile your project, linking it with libft.a:
```bash
gcc -Wall -Wextra -Werror my_program.c -L. -lft -o my_program  
```
