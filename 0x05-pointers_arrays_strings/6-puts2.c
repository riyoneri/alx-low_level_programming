#include "main.h"

/**
 * puts2 - print every other character
 * @s: character to be printed
*/

void puts2(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
_putchar(*(s + i));
i = i + 2;
}

_putchar('\n');
}
