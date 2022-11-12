#include "main.h"
/**
 * printf_digit - prints number
 * @arg: list of arguments
 * Return: return the length of integr
 */
int printf_digit(va_list arg)
{
	int n, m = 1, c = 0;
	unsigned int s;

	n = va_arg(arg, int);

	if (n < 0)
	{
		putchar('-');
		s = n * -1;
		c++;
	}
	else
	{
		s = n;
	}

	while ((s / m) >= 10)
	{
		m = m * 10;
	}
	while (m != 0)
	{
		c = c + putchar(s / m + '0');
		s = s % m;
		m = m / 10;
	}
	return (c);
}
