#include <stdio.h>

/**
* main - printing fizz buzz order
* Return: 0 success
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
continue;
}

if (i % 5 == 0)
{
printf("Buzz ");
continue;
}

printf("%d ", i);

}

putchar('\n');
return (0);
}
