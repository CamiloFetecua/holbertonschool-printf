Project _printf

Description

This project implements a version of the _printf function in C, which produces output according to a specific format. The function is designed to handle various conversion specifiers and provides additional features as described below.

Function Prototype

int _printf(const char *format, ...);


Return Value

The function returns the number of characters printed (excluding the null byte used to terminate output in strings).
Supported Conversion Specifiers

The format string is composed of zero or more directives. The following conversion specifiers are handled:

	%c: Character
	%s: String
	%%: Percent sign
	%d, %i: Signed integers
	%u: Unsigned integers
	%o: Octal
	%x, %X: Hexadecimal
	%b: Binary (custom specifier)
	%r: Prints a reversed string
	%R: Prints the Rot13

Example Usage

Here is an example demonstrating the use of the _printf function:



#include "main.h"

int main(void)
{
    unsigned int number = 42;
    _printf("The number %d in binary is: %b\n", number, number);

    return 0;
}


Repository

The code for this project is hosted on GitHub:

https://github.com/CamiloFetecua/holbertonschool-printf
