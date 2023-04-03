#include "main.h"

/**
 * _memset - fill n address from pointer b datas
 * @s: starting pointer
 * @b: data to fill in
 * @n: number of places
 * Return: starting position
*/

char *_memset(char *s, char b, unsigned int n)
{
int i, j = n;

for (i = 0; i < j; i++)
{
s[i] = b;
}

return (s);
}
