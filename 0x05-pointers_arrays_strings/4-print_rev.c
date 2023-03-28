#include "main.h"

/**
 * print_rev - print reversed string
 * @s: string to be printed while reversed
*/

void print_rev(char *s)
{
int i = 0;
while (*(s + i) != '\0')
i++;

i--;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
