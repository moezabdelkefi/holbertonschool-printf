#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_perc - print percent.
 *@args: input
 *Return: 1
 */
int printf_percent(__attribute__((unused)) va_list args)
{
	putchar('%');
	return (1);
}
