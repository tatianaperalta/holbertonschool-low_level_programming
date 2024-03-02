#include <stdio.h>
#include "main.h"

/**
* print_triangle - prototype function
* @size: variable for number of signs
* Return: Always 0 (Success)
*
*/

void print_triangle(int size)
{
int n;
int l;

if (size > 0)
{
for (l = 1; l <= size; l++)
{
for (n = size - l; n > 0; n--)
{
_putchar(' ');
}
for (n = 0; n < l; n++)
{
_putchar('#');
}
if (l == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
