#include "main.h"
/**
 *_printf - print output according to a format.
 *@format: type of data we need to print.
 *Return: the number of characters printed (encluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int len = 0;

	print pt[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_digit},
		{"i", printf_digit},
		{NULL, NULL},
	};
	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg, format);
	len = print_match(format, pt, arg); /*match_functions must have as arguments to the format, the args,the struct "pt" witch has the list of the functions*/
	va_end(arg);
	return (len);
}
