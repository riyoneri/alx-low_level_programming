#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>

/**
*_putchar - print a single character
*
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
*print_alphabet - print all lowercase alphabet 
*
*/
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
#endif
