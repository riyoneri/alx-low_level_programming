#include "main.h"

/**
* cap_string - array to capitalize
* @arr: array
* Return: capitalized array
*/

char *cap_string(char *arr)
{
int i = 0;

while (arr[i] != '\0')
{

if (
(
arr[i] == 32 ||
arr[i] == 9 ||
arr[i] == 10 ||
arr[i] == 11 ||
arr[i] == 44 ||
arr[i] == 59 ||
arr[i] == 46 ||
arr[i] == 33 ||
arr[i] == 34 ||
arr[i] == 63 ||
arr[i] == 40 ||
arr[i] == 41 ||
arr[i] == 123 ||
arr[i] == 125
)
&&
(arr[i + 1] >= 97 && arr[i + 1] <= 122)
)

{

arr[i + 1] = arr[i + 1] - 32;

}

i++;
}

return (arr);
}
