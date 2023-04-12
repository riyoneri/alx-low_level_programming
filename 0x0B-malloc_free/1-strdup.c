#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - copy string to another memory
* @str: pointer to initial string
* Return: pointer to copied string
*/

char *_strdup(char *str)
{
char *a;
int i = 0, len;

if (str == NULL)
{
return (NULL);
}

len  = strlen(str);
a = malloc(sizeof(char) * (len + 1));

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
