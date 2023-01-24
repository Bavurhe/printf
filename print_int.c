#include "main.h"
/**
 * print_int - prints decimal numbers in printf
 * @arguments: decimal integers
 * Return: number of intergers printed
 */

int print_int(va_list arguments)
{
	unsigned int absolutenum, count, auxnumber, zerocount;
	int numbers;

	count = 0;

	numbers = va_arg(arguments, int);

	if (numbers < 0)
	{
		absolutenum = (numbers * -1);
		count += _putchar(45);
	}
	else
	{
		absolutenum = numbers;
	}
	auxnumber = absolutenum;
	zerocount = 1;
	while (auxnumber > 9)
	{
		auxnumber /= 10;
		zerocount *= 10;
	}
	while (zerocount >= 1)
	{
		count += _putchar(((absolutenum / zerocount) % 10) + '0');
		zerocount /= 10;
	}
	return (count);
}
