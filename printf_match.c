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

	int i = 0, j, k = 0, done = 0;
	int c = 0;

	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] != '%')// print all character of format above percent
		{
			_putchar(format[i]);
			c = c + 1;
		}
		else //begin when we found percent
		{
			for (j = 0; pt[j].data; j++)//begin from the first character after percent
			{
				if (format[i + 1] == pt[j].data[k])//search about the character in the struct and incriment the counter
				{
					done = pt[j].y(args);
					c += done;
					i++;
					break;
				}
			}
			if (pt[j].data == NULL && format[i + 1] != ' ') // begin when the character doesn't exist 
			{
				if (format[i + 1] != 0)
				{
					putchar(format[i]);// print the character percent 
					putchar(format[i + 1]);//after character percent percent incriment with 2 character 
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
