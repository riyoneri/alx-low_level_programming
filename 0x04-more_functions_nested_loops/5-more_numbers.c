#include "main.h"

/**
* long_int - print long int
* @c: long int to print character
*/

void long_int(int c)
{
if (c / 10)
	long_int(c / 10);

_putchar(c % 10 + '0');
}

/**
* more_numbers - print to 10 times from 0 to 14
*/

void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
long_int(j);
}
_putchar('\n');
}
}
