#include "main.h"

/**
* string_nconcat - concatinate two strings
* @s1: first string
* @s2: second string
* @n: bytes of s2 to be added to
* Return: concatinated string pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, len1, len2;
char *ptr;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);
j = n;

if (len2 <= j)
n = len2;

ptr = malloc(sizeof(char) * (len1 + len2 + 1));

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
ptr[i] = s1[i];
}

for (i = 0; i < j; i++)
{
ptr[len1 + i] = s2[i];
}

return (ptr);
}
