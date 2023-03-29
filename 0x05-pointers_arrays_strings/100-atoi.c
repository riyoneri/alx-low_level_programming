#include "main.h"

/**
 * _atoi - print integer from string
 * @s: string to be checked for integers in it
 * Return: founded integer in s string
*/

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit_found = 0;


while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
{
digit_found = 1;
result = result * 10 + (*s - '0');
}
else if (*s == '-' && !digit_found && (*(s + 1) >= '0' && *(s + 1) <= '9'))
sign = -1;
else if (*s == '+' && !digit_found && (*(s + 1) >= '0' && *(s + 1) <= '9'))
sign = 1;
else if (digit_found)
break;

s++;
}

return (sign *result);
}
