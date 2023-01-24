#include "main.h"
/**
 * base_convertor - converts a number to any base and prints them
 * @n: the number
 * @base: the base to convert to
 * @numbers: the number set to use for conversion
 * 
 * Return: number of characters printed to the screen
 */
int base_convertor(unsigned long int n, unsigned int base, char numbers[])
{
    int counter = 0;

    if (n < base)
    {
        _putchar(numbers[n]);
    }
    else
    {
        counter += base_convertor(n / base, base, number);
        _putchar(numbers[n % base]);
    }
    counter += 1;
    return (counter);
}

/**
 * _print_bin - handles the 'b' specifier
 * @b: va_list to get the next item from
 * 
 * Return: returnes the number of characters printed to the screen
 */
int print_bin(va_list b)
{
    return (base_convertor(va_arg(b, unsigned int), 2, "01"));
}