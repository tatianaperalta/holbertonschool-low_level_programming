#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - function to numbers
*
* Return: Always 0.
*/

void print_most_numbers(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
if (n != '2' && n != '4')
_putchar(n);
}
_putchar('\n');
}
