#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_perc - print percent.
 *@args: input
 *Return: void.
 */
int printf_perc(__attribute__((unused)) va_list args) /*_attribute__((unused)): declare a function with two or one arguments*/
{
	putchar('%');
	return (1);
}
