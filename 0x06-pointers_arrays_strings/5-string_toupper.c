#include "main.h"

/**
* string_toupper - array to put upper case to
* @n: array
* Return: uppercase of array
*/

char *string_toupper(char *n)
{
int i = 0;

while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
i++;
}

return (n);
}
