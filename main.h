#ifdef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int printChar(va_list arguments);
int printString(va_list arguments);

#endif