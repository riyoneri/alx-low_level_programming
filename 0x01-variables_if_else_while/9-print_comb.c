#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c + '0');
		putchar(',');
		putchar(' ');
		c++;
	}
	return (0);
}
