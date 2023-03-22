#include "main.h"
/**
 * print_alphabet - function for printing all lowercase alphabet
 * Return: 0 (Success);
 */
void print_alphabet(void)
{
char ch;
for (ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
