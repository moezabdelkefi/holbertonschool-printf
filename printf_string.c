#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_string - print string.
 *@args:input.
 *Return: i.
 */
int print_string(va_list args)
{
	unsigned int i;
	char *str;

	str = va_arg(arg, char *);
	if (str == 0)
		str = "(null)";
	for (i = 0; str[i] != 0; i++)
		_putchar(str[i]);
	return (i);
}
