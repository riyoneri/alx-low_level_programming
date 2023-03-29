#include "main.h"

/**
 * _strncat - concatinate string
 * @dest: desination string
 * @src: source string
 * @n: number of bytes of src
 * Return: destination string(concatenated)
*/

char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;
while (dest[dest_len] != '\0')
{
dest_len++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + n] = '\0';
return (dest);
}
