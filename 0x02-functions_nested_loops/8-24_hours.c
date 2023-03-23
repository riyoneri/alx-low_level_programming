#include "main.h"

/**
*print_long - printing integers as characters
*
*@n: integer to be printed as character
*Return: void no result
*/

void print_long(long n)
{
if (n / 10)
{
print_long(n / 10);
}
_putchar(n % 10 + '0');
}

/**
* jack_bauer - printing all day's hours and minutes
*
*Return: void no result
*/
void jack_bauer(void)
{

int i, j;

for (i = 0; i < 24; i++)
{
	for (j = 0; j < 60; j++)
	{
	if (i < 10)
	{
		_putchar('0');
	}
	print_long(i);
	_putchar(':');

	if (j < 10)
	{
		_putchar('0');
	}
	print_long(j);
	_putchar('\n');
	}
}

}
