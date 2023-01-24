#include "main.h"
/**
 * _puts - writes the string s to stdout
 * @s: The string to print
 * Return: the number of characters printed
 */

int _puts(char *s)
{
int count = 0;

while (*s)
{
count += _putchar(*s);
s++;
}

return (count);
}





