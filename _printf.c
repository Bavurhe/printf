#include "main.h"
/**
 * _printf - prints a string in  a formatted way
 * @format: string to print
 * @...: variadic parameters
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i;
	va_list arguments;
	int (*f)(va_list);

	va_start(arguments, format);

	if (format != NULL)
	{
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '\0')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					f = check_specifier(format[i + 1]);
					if (f != NULL)
					{
						count += f(arguments);
					}	
					else
					{
						count += _putchar(format[i]) + _putchar(format[i + 1]);
					}
					i++;
				}
			}
			else
				{
					count += _putchar(format[i]);
				}
		}
		
	}
	va_end(arguments);
	return (count);
}