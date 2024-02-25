#include <stdio.h>

#include "main.h"

/**
* main -  prints _putchar, followed by a new line
*
* Return: On success 1.
*/

void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
