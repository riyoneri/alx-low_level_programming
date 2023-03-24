#include "main.h"

/**
* positive_and_negative - print whether a number is positive or negative
* @n: number to be checked sign
*/

void positive_or_negative(int n)
{

if (n < 0)
	printf("%d is negative\n", n);
else if (n > 0)
	printf("%d is positive\n", n);
else
	printf("%d is zero\n", n);

}
