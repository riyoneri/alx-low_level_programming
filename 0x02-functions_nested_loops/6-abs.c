#include "main.h"

/**
*_abs - function that computes absolute value of given parameter
*
*@num: number to return its absolute value
*
*Return: absolute value of given number
*/

int _abs(int num)
{
if (num < 0)
{
return (num * -1);
}
return (num);
}
