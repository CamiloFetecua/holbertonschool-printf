#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arg_pf;
	const char *pf;
	va_start(arg_pf, format);

	for(pf = format; *pf != '\0'; pf++)
	{
		if (*pf == '%' && *(pf + 1) != '\0')
		{
		
		}
	}

	va_end(arg_pf);
}
