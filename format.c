/*
 *Authors: -Brayan Salazar
 *	   -Camilo Fetecua
 */

#include "main.h"

/**
 * formatSpecifier - Format specifier function for printf-like functionality.
 * @format: The format specifier character.
 * @arguments: A va_list of arguments to be processed based on the format.
 *
 * Return: The number of characters printed (excluding null-terminating byte).
 *
 * Description:
 * - 'c': Print a single character.
 * - 's': Print a null-terminated string.
 * - 'd' or 'i': Print an integer.
 * - '%': Print a literal '%' character.
 * If the format is not recognized, print the format character as is.
 */
int formatSpecifier(char format, va_list arguments)
{
	int result = 0;
	if (format == 'c')
		result = (printChar(arguments));

	else if (format == 's')
		result = (printString(arguments));

	else if (format == 'd' || format == 'i')
		result = (printNumsInt(arguments));

	else if (format == '%')
		result = (printPercent(arguments));

	else if (format == 'b')
		result = (printBinary(va_arg(arguments, unsigned int)));

	else if (format == 'u')
		result = (printU(arguments));
	else
	{
		write(1, "%", 1);
		write(1, &format, 1);
		result = 2;
	}
	return (result);
}

