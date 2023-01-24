#include "main.h"

/**
 * print_cent - print a character % to stdout
 * @arguments: variadic parameter
 *
 * Return: number of characters printed
 */
int print_cent(va_list arguments)
{
	return (_putchar(va_arg(arguments, int)));
}
