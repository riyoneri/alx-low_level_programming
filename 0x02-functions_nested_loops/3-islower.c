#include "main.h"

/**
*_islower - check wheter character is lowercase or upper case
*/

int _islower(char c)
{
if (c > 96 && c <= 122)
{
return (1);
}
return (0);
}
