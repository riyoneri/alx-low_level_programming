#include "main.h"

/**
*_islower - check wheter character is lowercase or upper case
*
*@param c: character to be checked if is lowercase (character)
*
*@return value of 1 and 0 according to case of character (int) 
*/

int _islower(char c)
{
if (c > 96 && c <= 122)
{
return (1);
}
return (0);
}
