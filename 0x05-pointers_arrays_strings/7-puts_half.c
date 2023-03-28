#include "main.h"

/**
 * puts_half - print other halph of string
 * @s: pointer of string to be printed
*/

void puts_half(char *s)
{
int i = 0, halph;

while ((*(s + i) != '\0'))
{
i++;
}

halph = i % 2 == 0 ? i / 2 : (i - 1) / 2;

while (*(s + halph) != '\0')
{
_putchar(*(s + halph));
halph++;
}

_putchar('\n');
}
