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
	count = _putchar(c);
	return (count);
}

return (0);
}
