#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *_printf - print output according to a format.
 *@format: type of data we need to print.
 *Return: the number of characters printed (encluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int len;

	print_t pt[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_perc},
		{"i", printf_digit},
		{"d", printf_digit},
		{NULL, NULL},
	};
	if (format == NULL)
		return (-1);
	va_start(arg, format);
	len = print_match(format, pt, arg);
	va_end(arg);
	return (len);
}
