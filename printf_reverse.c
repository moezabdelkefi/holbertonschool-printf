#include "main.h"
/**
 *print_reverse - print reverse
 *@args:list of arguments
 *Return: count character
 */
int print_reverse(va_list args)
{
    int i, j, c = 0;
    char *P;
    P = va_arg(args, char *);
    for (i = 0; P[i] != '\0'; i++)
    {
        c++;
    }
    for (j = i - 1; j >= 0; j--)
    {
        putchar(P[j]);
    }
    return (c);
}
