#include "main.h"
#include <stdio.h>

/**
* print_numbers - function to numbers
*
* Return: Always 0.
*/

void print_numbers(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
_putchar(n);
}
_putchar('\n');
}
