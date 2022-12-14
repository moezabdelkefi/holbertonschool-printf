#include "main.h"
/**
 *printf_string - print string.
 *@args:argument.
 *Return: i.
 */
int printf_string(va_list args)
{
	unsigned int i;
	char *st;

	st = va_arg(args, char *);
	if (st == 0)
		st = "(null)";
	for (i = 0; st[i] != 0; i++)
		putchar(st[i]);
	return (i);
}
