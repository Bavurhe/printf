#include "main.h"
/**
 * print_upper_string - prints custom S conversion specifier
 * @S: variadic list
 * Return: number of characters printed
 */
int print_upper_string(va_list S)
{
char *s;
char hex[17] = "0123456789ABCDEF";
int total = 0, i = 0, c = 0;

(void)hex;
s = va_arg(S, char *);

while (s[i])
{
if (((s[i] >= 0) && (s[i] < 32)) || (s[i] >= 127))
{
total += _putchar('\\');
total += _putchar('x');
if (s[i] < 16)
{
total += _putchar('0');
c = s[i] - '0';
total += _putchar(hex[c]);
}
}
else
{
_putchar(s[i]);
total++;
}
}

return (total);
}
