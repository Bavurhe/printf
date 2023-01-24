#include "main.h"
/**
 * print_X - prints hexadecimals in upper case
 * @X: list that contains hexadecimal to print
 * Return: number of digits printed
 */
int print_X(va_list X)
{
return (print_hex_base(X, 'A'));
}
