#include "main.h"
/**
 * print_int - prints an integer.
 * @args: argument pointer
 * Return: i
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int x;
	int i = 0;
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		i++;
	}
	x = n;
	while ((x / d) > 9)
		d = d * 10;
	while (d > 0)
	{
		_putchar(x / d + '0');
		x = x % d;
		d = d / 10;
		i++;
	}
	return (i);
}
