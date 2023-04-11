#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - copy string to another memory
* @str: pointer to initial string
* Return: pointer to copied string
*/

char *_strdup(char *str)
{
char *a = malloc(sizeof(str));
int i = 0;

if (a == NULL)
{
return (NULL);
}

while (str[i] != '\0')
{
a[i] = str[i];
i++;
}

return (a);
}
