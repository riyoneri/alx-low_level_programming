#include "main.h"

/**
 * reverse_array - reverse array data
 * @a: array
 * @n: number of array
*/

void reverse_array(int *a, int n)
{
int i = 0, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
