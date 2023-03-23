#include "main.h"

/**
*print_long - printing long integers
*
*@num: long integer to be printed
*
*Return: no return data
*/

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

print_long(num3);
_putchar(',');
_putchar(' ');

num1 = num2;
num2 = num3;
}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
fibbo();
return (0);
}
