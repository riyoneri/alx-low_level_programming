#include "main.h"

/**
*fibbo - printing first 98 fibonacci series
*
*Return: no return data
*/

void fibbo(void)
{
int num1 = 1, num2 = 2, num3, i;
_putchar(num1 + '0');
_putchar(',');
_putchar(' ');
_putchar(num2 + '0');
_putchar(',');
_putchar(' ');

for (i = 0; i < 98; i++)
{
num3 = num1 + num2;

void print_long(long num)
{
if (num < 0)
{
_putchar('-');
num = -num;
}

if (num > 9)
{
print_long(num / 10);
}
_putchar(num % 10 + '0');

}
print_long(num3);
_putchar(',');
_putchar(' ');

num1 = num2;
num2 = num3;
}
}
