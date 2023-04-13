#include "main.h"

/**
* str_concat - concatinate two strings
* @s1: pointer to first string
* @s2: pointer to second string
* Return: pointer to concatinated string
*/

char *str_concat(char *s1, char *s2)
{

int i = 0, j = 0;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i] != '\0' || s2[i] != '\0')
{
i++;
}

result = malloc(sizeof(char) * i);
if (result == NULL)
{
return (NULL);
}

i = j = 0;
while (s1[i] != 0)
{
result[i] = s1[i];
i++;
}

while (s2[j] != 0)
{
result[i] = s2[j];
i++;
j++;
}

return (result);
}
