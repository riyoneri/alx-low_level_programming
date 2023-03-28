#include "main.h"

/**
 * _strcpy - copy string to another variable
 * @dest: destinational string
 * @src: source string
 * Return: destination pointer
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = *(src + i);
return (dest);

}
