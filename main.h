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
} print;
int _putchar(char c);
int funct_string(va_list arg);
int funct_char(va_list arg);
int funct_percent(__attribute__((unused)) va_list arg);
int print_match(const char *format, print pt[], va_list args);
int _printf(const char *format, ...);
int printf_digit(va_list args);
int print_reverse(va_list args);
int funct_rot_13(va_list arg);
#endif
