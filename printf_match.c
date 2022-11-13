#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_match -  print output according to a format.
 *@format: type of dat we need to print.
 *@pt: structure.
 *@args: input functions.
 *Return: the number of charactere printed (encluding the null byte).
 */
int print_match(const char *format, print pt[], va_list args)
{
	int i = 0, j, done = 0;
	int c = 0, k = 0;

	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);            /*print all character of format above percent*/
			c = c + 1;
		}
		else
		{                                 /*begin when we found % and begin we found the fisrt character after percent*/
			for (j = 0; pt[j].data; j++)
			{
				if (format[i + 1] == pt[j].data[k])        /* search about the character with the struct "pt" and incriment the counter j*/
				{
					done = pt[j].y(args);
					c += done;
					i++;
					break;
				}
			}
			if (pt[j].data == NULL && format[i + 1] != ' ')
			{                                                /*begin when the character dosent existe in "pt"*/
				if (format[i + 1] != 0)
				{
					putchar(format[i]);           /*print the character percent and after character percent and incriment c with 2 character*/
					putchar(format[i + 1]);
					c = c + 2;
					i++;
				}
				else
					return (-1);
			}
		}
	}
	if (format == NULL)
		return (-1);
	return (c);
}
