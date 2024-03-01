#include <stdio.h>
#include "main.h"

/**
* print_square - prototype function
* @size: variable for number of signs
* Return: Always 0 (Success)
*
*/

void print_square(int size)
{
int n;
int l;

if (size > 0)
{
for (n = 0; n < size; n++)
{
for (l = 0; l < size; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
