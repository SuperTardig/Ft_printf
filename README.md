# ft_printf
The goal of this 42 school project is to recreate the C standard library function `printf()` as a library named `"libftprintf.a"`. We needed to discover and use variadic function. Variadic functions are function that can take a variable number of arguments. A minimum of one is required for `ft_printf()` and an additionnal one for each conversion. After, this project is done, it can be added to `libft` to have a more complete library.
# Mandatory
The conversions that were required are the following:
  - %c, prints a char
  - %s, prints a char* (string)
  - %p, prints that address of a void*
  - %d, prints a decimal in base 10
  - %i, prints an integer in base 10
  - %u, prints an unsigned decimal in base 10
  - %x, prints a number in hexadecimal lowercase format
  - %X, prints a number in hexadecimal uppercase format
  - %%, prints a percent sign
# Usage
To use this library, you have to:

  1. Clone this repository into your project
  2. Go to the root of the repository and use `make`
  3. Include `"ft_printf.h"` in your project
  4. Link the library at compile time by adding `-L/ft_printf_42 -lftprintf` to your compilation line 
