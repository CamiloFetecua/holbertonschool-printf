#include "main.h"

int printChar(va_list arguments)
{
    char c = va_arg(arguments, int);
    write(1, &c, 1);
    return (1);
}

int printString(va_list arguments)
{
	char *s = va_arg(arguments, char *);

	if (s == NULL)
		return (0);

	int count;

	for (count = 0; s[count] != '\0'; count++)
		count++;

	write(1, s, count);
	return (count);
}

