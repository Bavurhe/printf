#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - prints a string in  a formatted way
 * @format: string to print
 * @...: variadic parameters
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	int (*f)(va_list);
	va_list arguments; /*declaring a variadic list*/

	va_start(arguments, format); /*initializing the variadic*/
	

	/*prevent parsing a null pointer*/
	if (format == NULL)
	{
		return (-1);
	}
	/*print each character of string*/
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(arguments);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}

