#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_char - print caracter
 *@args: argument
 *Return: i(caracater).
 */
int printf_char(va_list args)
{
	char ch;

	ch = (va_arg(args, int));
	_putchar(ch);
	return (1);
}
