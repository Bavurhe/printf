#include "main.h"

/**
 * print_cent - print a character % to stdout
 * @arguments: variadic parameter
 *
 * Return: number of characters printed
 */
int print_cent(va_list arguments)
{
	(void) arguments;

	write(1, "%", 1);

	return (1);
}
