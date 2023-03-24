#include <stdio.h>
#include <math.h>

/**
* main - print largest prime factor of 61285475143
* Return: 0 success
*/

int main(void)
{
long long n = 612852475143;
long long largest_prime = 1;

while (n % 2 == 0)
{
largest_prime = 2;
n /= 2;
}

for (long long i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_prime = i;
n /= i;
}
}

if (n > 2)
largest_prime = n;

printf("%lld\n", largest_prime);

return (0);
}
