#include "main.h"
/**
 * print_bin - prints binary in printf function
 * @b: binary passed in function
 * Return: count of what is printed
 */
int print_bin(va_list b)
{
	unsigned int i, count, num, binary, arr[32];

	i = 0;
	count = 0;
	num = va_arg(b, int);

	if (num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (num > 0)
		{
			binary = num % 2;
			num /= 2;
			arr[count] = binary;
			count++;
		}
		i = count - 1;
		while (i > 0)
		{
			_putchar(arr[i] + '0');
			i--;
		}
		_putchar('0' + arr[i]);
	}
	return (count);
}
