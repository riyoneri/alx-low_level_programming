#include "main.h"

/**
*_isupper - check wheter character is uppercase
*@c: character to be checked
*Return: 1 success
*/

int _isupper(int c)
{
if (c > 64 && c < 91)
	return (1);
return (0);
}
