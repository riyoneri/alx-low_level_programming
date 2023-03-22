#include "main.h"

/**
*print_last_digit - print last digit of input value
*
*@num: number to get last value for
*
*Return: last number of value
*/

int print_last_digit(int num)
{
int number_mod;

if (num < 0)
{
-((unsigned int)num);
}

number_mod = num % 10;

_putchar(number_mod + '0');
return (num % 10);
}
