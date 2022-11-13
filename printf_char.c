#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_char - print caracter
 *@args: input
 *Return: i(caracater).
 */
int funct_char(va_list arg)
{
	char ch;

	ch = (va_arg(arg, int));
	_putchar(ch);
	return (1);
}
