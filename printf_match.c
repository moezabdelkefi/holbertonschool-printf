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
	/*print all character of format above percent*/
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{ /*begin when we found % and begin we found the fisrt character after percent*/
			for (j = 0; pt[j].data != NULL; j++)
			{
				if (format[i + 1] == pt[j].data[0])
				{ /* search about the character with the struct "pt" and incriment the counter j*/
					val = pt[j].y(args);
					if (val == -1)
						return (-1);
					count += val;
					break;
				}
			}
			if (pt[j].data == NULL && format[i + 1] != ' ')
			{ /*begin when the character dosent existe in "pt"*/
				if (format[i + 1] != '\0')
				{ /*print the character percent and after character percent and incriment c with 2 character*/
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
