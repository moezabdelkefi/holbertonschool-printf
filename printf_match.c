#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_match -  print output according to a format.
 *@format: type of dat we need to print.
 *@pt: structure.
 *@args: argument.
 *Return: the number of charactere printed (encluding the null byte).
 */
int print_match(const char *format, print pt[], va_list args)
{
	int i, j, val;
	int count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			putchar(format[i]);
			count = count + 1;
		}
		{
			for (j = 0; pt[j].data != NULL; j++)
			{
				if (format[i + 1] == pt[j].data[0])
				{
					val = pt[j].y(args);
					if (val == -1)
						return (-1);
					count += val;
					break;
				}
			}
			if (pt[j].data == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
