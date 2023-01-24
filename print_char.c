#include "main.h"

/**
 * print_char - print a character to stdout
 * @c: variadic parameter
 *
 * Return: number of characters printed
 */
int print_char(va_list c)
{
char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

