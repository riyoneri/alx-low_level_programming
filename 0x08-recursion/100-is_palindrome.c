#include "main.h"

/**
* palindrome_checker - check if string is palindrome
* @s: string to check
* @begin: beginning of string
* @end: End of string
* Return: 1 or 0 depending on palindrome results
*/

int palindrome_checker(char *s, int begin, int end)
{
if (s[begin] == s[end])
{
return (1);
}

if (s[end] != s[begin])
{
return (0);
}

return (palindrome_checker(s, begin + 1, end - 1));
}

/**
* is_palindrome - call palindrome checker in action
* @s: string to check
* Return: 1 or 0 depending on palindrome results
*/

int is_palindrome(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (palindrome_checker(s, 0, len - 1));
}
