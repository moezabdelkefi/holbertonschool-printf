#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *struct print - structure of printf functions
 *@tt: input
 *@y: the function pointer to the printing function used
 */
typedef struct print
{
	char *data;
	int (*y)(va_list);
} print_t;

int printf_char(va_list args);
int printf_string(va_list args);
int printf_perc(va_list args);
int print_match(const char *format, print_t pt[], va_list args);
int _printf(const char *format, ...);
int printf_digit(va_list args);
int func_conv(va_list args);
#endif
