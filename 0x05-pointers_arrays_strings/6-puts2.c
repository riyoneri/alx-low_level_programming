#include "main.h"

/**
 * puts2 - print every other character
 * @s: character to be printed
*/

void puts2(char *s)
{
int i = 0;

while ((*(s + i) != '\0') && (*(s + i + 1) != '\0'))
{
_putchar(*(s + i));
i = i + 2;
}

if ((*(s + i) != '\0'))
{
_putchar(*(s + i));
}

_putchar('\n');
}
