#include "main.h"

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
				case 'c'
					count = printChar(arguments);
					break;
				case 's'
					count = printString(arguments);
					break;
				case '%'
					count = printString(arguments);
                                        break;
			}
		}
	}

	va_end(arg_pf);
	return (count);
}
