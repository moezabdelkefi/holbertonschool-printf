#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_string - print string.
 *@args:input.
 *Return: i.
 */
int printf_string(va_list args)
{
	int i = 0;
	char *st = va_arg(args, char *);

	if (st == NULL) /*pointere on no adress*/
	{
		st = "(null)"; /*declere empty string*/
	}
	for (i = 0; st[i] != '\0'; i++)
	{
		putchar(st[i]);
	}
	return (i);
}
