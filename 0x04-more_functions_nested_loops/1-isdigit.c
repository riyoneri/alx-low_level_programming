#include "main.h"

/**
*_isdigit - check wheter charcter is digit
*@c: character to be checked
*Return: 1 success
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
	return (1);
return (0);
}
