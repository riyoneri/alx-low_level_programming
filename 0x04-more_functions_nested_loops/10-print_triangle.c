#include "main.h"

/**
* print_triangle - pring # triangles according to number given
* @size: size of rows to be printed
*/

void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{

for (i = size; i > 0; i--)
{

for (j = 1; j <= size; j++)
{

if (j < i)
{
_putchar(' ');
}
else
{
_putchar('#');
}

}

_putchar('\n');
}

}

}
