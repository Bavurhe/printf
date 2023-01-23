#include "main.h"
/**
 * check_specifier - check that character i a valid handler
 * and assigns an appropriate function for its printing
 * @format: the handler type
 * Return: pointer to a function, if successful and NULL if not successful
*/

int (*check_specifier(const char *format))(va_list)
{
int i;

pH my_array[6] = {
{"c", print_char},
{"s", print_str},
{"%", print_cent},
{"d", print_dec},
{"i", print_int},
{NULL, NULL}
};

for (i = 0; my_array[i].t != NULL; i++)
{
if (*(my_array[i].t) == *format)
{
return (my_array[i].f);
}
}

return (NULL);
}