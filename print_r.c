#include "main.h"

/**
 * print_r - prints a string in reverse
 * @r:list to increment
 * Return: number of characters printed
 */
int print_r(va_list r)
{
	char *s = va_arg(r, char *);
	int i, count;

	if (s == NULL)
		s = ")llun(";
	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
