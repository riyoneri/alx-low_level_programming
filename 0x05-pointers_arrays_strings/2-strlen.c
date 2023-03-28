#include "main.h"

/**
 * _strlen - printing length of string
 * @s: starting point of string array
 * Return: length of string s
*/

int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}

return (i);

}
