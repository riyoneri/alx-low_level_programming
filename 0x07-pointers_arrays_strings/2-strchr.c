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

while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}

return (&s[i]);

}
