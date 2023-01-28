#include "main.h"
#include <stdarg.h>

/**
 * print_rot13 - prints a string in rot13
 * @R: list to increment
 * Return:count of characters printed
 */
int print_rot13(va_list R)
{
	char *str;
	int count = 0;
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == str[i])
			{
				_putchar(output[j]);
				count++;
				break;
			}
		}
		if (!input[j])
		{
			count += _putchar(str[i]);
			count++;
		}
	}
	return (count);
}
