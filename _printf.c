#include "main.h"

/**
 * _printf - prints formatted strings
 * @format: a string containing formats
 *
 * Return: int (the total number of charachters printed)
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list arguments;
	int (*f)(va_list);

	va_start(arguments, format);
	while (format != NULL && format[i])
	{
		if (format[i] == '%')
		{
			f = check_specifier(format[i + 1]);
			if (f != NULL)
				count += f(arguments);
			else
			{
				_putchar('%');
				_putchar(format[i + 1]);
				count += 2;
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			count += 1;
		}
		i += 1;
	}
	return (count);
}
