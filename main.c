#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
	int num1;
	int num2;
    unsigned int ui;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	num1 = _printf("Percent:[%%]\n");
    num2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", num1);
    printf("Len:[%d]\n", num2);
	
    return (0);
}