/*
 *Authors: -Brayan Salazar
 *	   -Camilo Fetecua
 */

#include "main.h"

/**
 * printBinary - Print the binary representation of an unsigned integer.
 * @num: Unsigned integer to print in binary.
 *
 * This function prints the binary representation of the provided number.
 *
 * Return: The count of digits printed in the binary representation.
 */
int printBinary(unsigned int num)
{
	char digit;
	int count = 0;

	if (num > 1)
		count += printBinary(num / 2);

	digit = (num % 2) + '0';
	write(1, &digit, 1);
	count++;

	return (count);
}

/**
 * printU - Print an unsigned integer.
 * @arguments: A va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed (excluding null-terminating byte).
 */
int printU(va_list arguments)
{
	unsigned int num = va_arg(arguments, unsigned int);

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (countNum(num));
}

/**
 * printOctal - Print the octal representation of an unsigned integer.
 * @num: Unsigned integer to print in octal.
 *
 * Return: The count of digits printed in the octal representation.
 */
int printOctal(unsigned int num)
{
    char octalDigit;
    int count = 0;

    if (num == 0)
    {
        write(1, "0", 1);
        return 1;
    }

    if (num > 0)
        count += printOctalRec(num);

    return count;
}

/**
 * printOctalRec - Recursive helper function to print octal representation.
 * @num: Unsigned integer to print in octal.
 *
 * Return: The count of digits printed in the octal representation.
 */
int printOctalRec(unsigned int num)
{
    char octalDigit;
    int count = 0;

    if (num > 0)
    {
        count += printOctalRec(num / 8);
        octalDigit = (num % 8) + '0';
        write(1, &octalDigit, 1);
        count++;
    }

    return count;
}

/**
 * rot13 - Converts string to rot13
 * @list: string to convert
 * Return: converted string
 */
int rot13(va_list list)
{
	int i = 0, j = 0;
        char orden[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == orden[j])
			{
				s[i] = rot13[j];
				write (1,s[i],1);
			}
		}
	}
	return (1);
}


