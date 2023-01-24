#include "main.h"
/**
 * print_str - print a varaidic string each character per time to stdout
 * @arguments: variadic parameter
 * Return: number of character
*/

int print_str(va_list arguments)
{
int i = 0;
char* str = va_arg(arguments, char*);
while (*str != '\0') {
_puts(str);
i++;
str++;
}
return (i);
}

