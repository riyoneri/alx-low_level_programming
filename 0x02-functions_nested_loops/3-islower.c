#include "main.h"

/**
*_islower - check wheter character is lowercase or upper case
*
*@c: character to be checked if is lowercase (character)
*
*Return: Always 0
*/

int _islower(char c)
{
if (c > 96 && c <= 122)
{
return (1);
}
return (0);
}
