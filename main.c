#include "main.h"
#include <limits.h>

int main(void)
{
    int len;
    unsigned int ui;

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d]\n", len);

    len = _printf("Character:[%c]\n", 'H');
    _printf("Length:[%d]\n", len);

    len = _printf("String:[%s]\n", "I am a string !");
    _printf("Length:[%d]\n", len);

    ui = (unsigned int)INT_MAX + 1024;
    len = _printf("Unsigned:[%u]\n", ui);
    _printf("Length:[%d]\n", len);

    return (0);
}
