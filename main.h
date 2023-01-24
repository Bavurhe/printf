#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *s);
int (*check_specifier(char format))(va_list my_array);


/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @t: character pointer to compare
 * @f: function to handle printing
 */
typedef struct printHandler
{
	char *t;
	int (*f)(va_list);
} pH;

int print_char(va_list c);
int print_str(va_list s);
int print_cent(va_list p);
int print_dec(va_list d);
int print_int(va_list i);
int print_bin(va_list b);


#endif
