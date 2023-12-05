#include "main.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
    int len;
    unsigned int ui;

    len = _printf("Vamos a intentar imprimir una oración simple.\n");
    _printf("Longitud:[%d]\n", len);

    len = _printf("Carácter:[%c]\n", 'H');
    _printf("Longitud:[%d]\n", len);

    len = _printf("Cadena:[%s]\n", "Soy una cadena !");
    _printf("Longitud:[%d]\n", len);

    ui = (unsigned int)INT_MAX + 1024;
    len = _printf("Sin signo:[%u]\n", ui);
    _printf("Longitud:[%d]\n", len);

    len = printf("Vamos a intentar imprimir una oración simple.\n");
    printf("Longitud:[%d]\n", len);

    len = printf("Carácter:[%c]\n", 'H');
    printf("Longitud:[%d]\n", len);

    len = printf("Cadena:[%s]\n", "Soy una cadena !");
    printf("Longitud:[%d]\n", len);

    ui = (unsigned int)INT_MAX + 1024;
    len = printf("Sin signo:[%u]\n", ui);
    printf("Longitud:[%d]\n", len);


    return (0);
}
