#include "main.h"

/**
 * print_cent - print a character % to stdout
 * @p: variadic parameter
 *
 * Return: number of characters printed
 */
int print_cent(va_list p)
{
	(void) p;
	_putchar('%');
	return (1);
}
