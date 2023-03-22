#include "main.h"

/**
*_isalpha - Check if parameter c is alphabetic
*
*@c: Character to be checked
*
*Return: 0 success
*/

int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c <= 122))
{
return (1);
}
return (0);
}
