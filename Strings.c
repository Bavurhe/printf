#include "main.h"
/**
 * _strlen - find the length of a string
 * @str: the string
 * Return: length of the string
 */
int _strlen(char *str)
{
int i = 0;

while (*(str + i))
{
i++;
}

return (i);
}

/**
 * _strcpy - copy a string into string
 * @src: source string
 * @dest: the destination string
 * Return: the new string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * _string_upper - convert string to uppercase
 * @str: the string
 * Return: nothing
 */
void _string_upper(char *str)
{
int i;

i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
i++;
}
}
