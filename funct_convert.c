#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *
 */
int func_conv(va_list args)
{
    int num = va_arg(args, int), len = 0, a = 1, num1;
    num1 = convert(num, 2);
    while (num1 / a >= 10)
        a *= 10;
    while (a > 0)
    {
        putchar('0' + num1 / a);
        len++;
        num1 %= a;
        a /= 10;
    }
    return (len);
}
