#include "main.h"
/**
 * check_specifier - check that character i a valid handler
 * and assigns an appropriate function for its printing
 * @format: the handler type
 * Return: pointer to a function, if successful and NULL if not successful
*/

int (*check_specifier(char format))(va_list)
{

unsigned int i = 0;

pH my_array[] = {
{"c", print_char},
{"s", print_str},
{"%", print_cent},
{"d", print_dec},
{"i", print_int},
{"d", print_dec},
{"b", print_bin},
{"u", print_unsig},
{"o", print_octal},
{"x", print_x},
{"X", print_X},
{"r", print_r},
{"R", print_rot13},
{NULL, NULL}
};

while (my_array[i].t != NULL)
{
if (my_array[i].t[0] == format)
{
return (my_array[i].f);
}
i++;
}
return (NULL);
}
