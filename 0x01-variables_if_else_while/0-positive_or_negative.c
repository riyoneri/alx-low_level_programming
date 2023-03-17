#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		print("%d is negative", n);
	else
		print("%d is positive", n);
	/* your code goes there */
	return (0);
}
