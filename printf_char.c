#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_char - print caracter
 *@args: input
 *Return: i(caracater).
 */
int print_char(va_list args)
{
	char ch;

	ch = (va_arg(arg, int));
	_putchar(ch);
	return (1);
}
