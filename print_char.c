#include "main.h"

/**
 * print_char - print a character to stdout
 * @arguments: variadic parameter
 *
 * Return: number of characters printed
 */
int print_char(va_list arguments)
{
	char c = (char)va_arg(arguments, int);

	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}

	return (0);
}
