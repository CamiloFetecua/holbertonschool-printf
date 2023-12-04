#include "main.h"

int _printf(const char *format, ...)
{
	char newLine;
	int i = 0;

	va_list arguments;
	va_start(arguments, format); 

	while (format && format[i] != '\0')
	{ 
		if(format[i] == '%' && format[i++])
		{
			switch(format[i])
			{
				case 's':
					printString(arguments);
					break;
				case 'c':
					printChar(arguments);
					break;
				default: 
					i++;
					continue;
			}
		}
		else
		{
			char c = format[i];
			write(1, &c, 1);
		}
		i++;
	}
	newLine = '\n';
	write(1, &newLine, 1);

	va_end(arguments); 
	return (0);
}
