#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_char - print caracter
 *@args: input
 *Return: i(caracater).
 */
int printf_char(va_list args)
{
    int x = 0;

    x = va_arg(args, int);
    putchar(x);
    return (1);
}
