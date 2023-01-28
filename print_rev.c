#include "main.h"
/**
 * print_rev - prints in reverse
 * @r: input to print in reverse
 * Return: the output count
 */
int print_rev(va_list r)
{
    int i = 0;
    int length = 0;
    char *str;

    str = va_arg(r, char *);
    while (str[length])
    {
        length++;
    }
    while ((length - i) >= 0)
    {
        _putchar(str[length - i - 1]);
        i++;
    }
    return (i);
}