#include "main.h"

/**
*print_sign - check sign of character
*
*@n: character to be checked
*
*Return: 0 or 1 or -1 outputs
*/

int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('+');
return (1);
}

_putchar('\n');
}
