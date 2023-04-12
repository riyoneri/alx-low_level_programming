#include "main.h"

/**
 * create_array - initializes array of characters with specific char
 * @size: size of array
 * @c: specific character
 * Return: array of modified characters
 */

char *create_array(unsigned int size, char c)
{
char *s = malloc(sizeof(char) * size);
int i = 0, j = size;

if (s == NULL || size == 0)
{
return (NULL);
}

for (i = 0; i < j; i++)
{
s[i] = c;
}

return (s);
}
