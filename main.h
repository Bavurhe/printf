#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);

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

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_dec(va_list);
int print_int(va_list);
#endif
