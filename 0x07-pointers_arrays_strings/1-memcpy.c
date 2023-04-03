#include "main.h"

/**
 * _memcpy - copy string to destination
 * @dest: destinational string
 * @src: source string
 * @n: number of characters to copy
 * Return: Pointer to start of destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i, j = n;

for (i = 0; i < j; i++)
{
*(dest + i) = src[i];
}
return (dest);
}
