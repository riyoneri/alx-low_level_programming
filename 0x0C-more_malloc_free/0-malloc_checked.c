#include "main.h"

/**
* malloc_checked - returns pointer to allocated memory
* @b: parameter to be allocated with
* Return: allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
