#include "main.h"
#include <unistd.h>

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arguments;
	const char *pf;
	va_start(arguments, format);

	for(pf = format; *pf != '\0'; pf++)
	{
		if (*pf == '%' && *(pf + 1) != '\0')
		{
			pf++;
			switch (*pf)
			{
				case 'c':
					count += printChar(arguments);
					break;
				case 's':
					count += printString(arguments);
					break;
				case 'd':
				case 'i':
					count += countNum(va_arg(arguments, unsigned int));
					break;
				case '%':
					count += printPercent(arguments);
                                        break;
				default:
					write(1, "%", 1);
					write(1, pf, 1);
					count += 2;
					break;
			}
		}
		else
		{
			write(1, pf, 1);
			count++;
		}
	}
	va_end(arguments);
	return (count);
}