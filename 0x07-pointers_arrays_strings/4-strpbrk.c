#include "main.h"

/**
 * _strpbrk - search first matching character in string
 * @s: string to be searched in
 * @accept: string to search
 * Return: pointer to first matched character
 */

char *_strpbrk(char *s, char *accept)
{
char *p1, *p2;

for (p1 = s; *p1 != '\0'; p1++)
{
for (p2 = accept; *p2 != '\0'; p2++)
{
if (*p1 == *p2)
{
return (p1);
}
}
}

return (0);
}
