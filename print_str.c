#include "main.h"
/**
 * print_str - print a variadic string each character per time to stdout
 * @s: variadic parameter
 * Return: number of character
*/
int print_str(va_list s)
{
int count = 0;
char *str = va_arg(s, char *);
if (str == NULL)
{
	str = "(null)";
}
for (count = 0; str[count]; count++)
{
	_putchar(str[count]);
}

return (count);
}

