![fig0](https://user-images.githubusercontent.com/112869342/201534351-91bfa9c9-93ff-491c-a671-3ba86b6f776b.png)



                                           Holberton school team project "PRINTF"

Introducing :
This project consists about creating the printf function in the C language, and getting the exact same output as if we were using teh original one.
It's a way that produce precisly formatted output from numerical or textural argmuments. 
It's used to print to the screen integers, characters,decimals, strings of characters and percents. 

   File	Description:

printf.c:	contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives.

_putchar.c:	contains the function _putchar, which writes a character to stdout.

main.h:	contains all function prototypes used for _printf.

man_3_printf	:manual page for the custom _printf function.

Format Specifiers:
The format specifiers tells the function how to take the arguments based on the type indicated.

Type	FORMAT:

%c:	Print a character passed as parameter.

%s:	Prints a string.

%i::	Prints a signed number (int).

%d	Prints a signed decimal number.

%%:	Prints a percentage symbol.


Compilation:
The code for compiling is:

                                   $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


Authors :
Moez Abdelkefi

Iheb Drihmi
