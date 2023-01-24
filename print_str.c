#include "main.h"

/**
 * print_str - print a variadic string each character per time to stdout
 * @arguments: variadic parameter
 * Return: number of character
*/
int print_str(va_list arguments)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		return (-1);
	}
	while (str[i])
	{
		count = write(1, &str[i], 1);
		i = i + 1;
	}
	return (count);
}
