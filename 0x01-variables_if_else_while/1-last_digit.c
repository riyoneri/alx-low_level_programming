#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10 < 0 ? (n % 10) * -1 : n % 10;

	if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (lastDigit > 0 && lastDigit < 6)
	{
		printf("Last digit of %d is %d ", n, lastDigit);
		printf("is less than 6 and not 0\n");
	}
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);

	return (0);
}