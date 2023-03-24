#include <stdio.h>

/**
* main - print largest prime numbers of 612852475143
* Return: 0 success
*/

int main(void)
{
long num = 612852475143;
long i;

for (i = 2; i * i <= num; i++)
{
while (num % i == 0)
{
num /= i;
}
}

if (num > 1)
{
printf("%ld\n", num);
}

return (0);
}
