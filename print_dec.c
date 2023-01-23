#include "main.h"
/**
 * print_dec - prints a given integer from a variadic paramter to base 10
 * @arguments: variadic paramter
 * Return: number of character printed on success
*/

int print_dec(va_list arguments)
{
int i = 0;
int count = 0;
int numb;
int my_arr[10];
char x[1];

/*Fetch integer from variadic paramters*/
numb = va_arg(arguments, int);

/*Break the anumber apart and assign them to array*/
while (numb != 0)
{
my_arr[i] = (numb % 10);
numb = numb / 10;
if (numb == 0)
{
break;
}
else
{
i++;
}
}

/*Write the content of the array to stdout*/
for (i = 0; i >= 0; i--)
{
/*Convert int to char*/
x[0] = ('0' + my_arr[i]);
count += write(1, x, 1);
}

return (count);

}
