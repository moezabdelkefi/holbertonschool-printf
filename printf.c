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

	print pt[] = {
		{"c", funct_char},
		{"s", funct_string},
		{"%", funct_percent},
		{"d", printf_digit},
		{"i", printf_digit},
		{NULL, NULL},
	};
	va_list arg;
	int len = 0;
	va_start(arg, format);
	len = print_match(format, pt, arg);
	va_end(arg);
	return (len);
}
