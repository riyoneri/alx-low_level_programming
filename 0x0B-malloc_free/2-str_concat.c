#include "main.h"

/**
* str_concat - concatinate two strings
* @s1: pointer to first string
* @s2: pointer to second string
* Return: pointer to concatinated string
*/

char *str_concat(char *s1, char *s2)
{
char *a;
int i, j, len1, len2;

i = 0;
len1 = s1 == NULL ? -1 : strlen(s1);
len2 = s2 == NULL ? -1 : strlen(s2);

a = malloc((sizeof(char) * (len1 + 1)) + (sizeof(char) * (len2 + 1)));

if (a == NULL)
{
return (NULL);
}

if (s1 != NULL)
{
while (s1[i] != '\0')
{
a[i] = s1[i];
i++;
}
}


j = i;
i = 0;

if (s2 != NULL)
{
while (s2[i] != '\0')
{
a[j] = s2[i];
j++;
i++;
}
}

return (a);
}
