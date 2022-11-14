#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_match -  p print output according to a format.
 *@format: type of dat we need to print.
 *@pt: structure.
 *@args: argument.
 *Return: the number of charactere printed (encluding the null byte).
 */
int print_match(const char *format, print pt[], va_list arg)
{
	int i, j;
	int count = 0;
	/*print all character of format above percent*/
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{ /*begin when we found % */
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			for (j = 0; j < 5; j++)
			{
				if (format[i] == pt[j].data)
				{

					pt[j].p(arg);
					break;
				}
				else
				{
					putchar(*(format + i));
				}
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}
	return (count);
}
