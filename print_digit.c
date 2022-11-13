#include "main.h"
/**
 * printf_digit - prints number
 * @arg: list of arguments
 * Return: return the length of integr
 */
int printf_digit(va_list arg)
{
	int n, m = 1, c = 0;
	unsigned int k;

	n = va_arg(arg, int);

	if (n < 0)
	{
		putchar('-');  /*print negative number*/
		k = n * -1;
		c++;
	}
	else
	{
		k = n; /*value of k will be positive*/
	}

	while ((k / m) >= 10)
	{
		m = m * 10;               /*count number of digit of the integer*/
	}
	while (m != 0)
	{
		c = c + putchar(k / m + '0');
		k = k % m;
		m = m / 10;
	}
	return (c);
}
