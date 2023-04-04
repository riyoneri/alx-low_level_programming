#include <stdio.h>
#include "main.h"

/**
* print_diagsums - print sum of diagonals
* @a: pointer to first array element
* @size: size of array
*/

void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0, i;

for (i = 0; i < (size * size); i = i + (size + 1))
{
sum1 += a[i];
}

for (i = size - 1; i < (size * size) - 1; i = i + (size - 1))
{
sum2 += a[i];
}

printf("%d, %d\n", sum1, sum2);
}
