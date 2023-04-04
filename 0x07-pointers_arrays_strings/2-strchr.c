#include "main.h"

/**
 * _strchr - find character in string
 * @s: string to fine in
 * @c: character to find
 * Return: found character or null
*/

char *_strchr(char *s, char c)
{
int i = 0;
int isFound = 0;

while (s[i] != '\0')
{
if (s[i] == c)
{
isFound = 1;
s = &s[i];
break;
}
i++;
}

if (isFound == 0)
return ('\0');
return (s);
}
