#include "main.h"

/**
* alloc_grid - returns pointer to two dimensional array
* @width: columns number of
* @height: rows number
* Return: pointer to twodimensional array
*/

int **alloc_grid(int width, int height)
{

int **arr = malloc(sizeof(int) * (height * width)), i, j;

if (arr == NULL || width <= 0 || height <= 0)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr == NULL)
{
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}

return (arr);
}
