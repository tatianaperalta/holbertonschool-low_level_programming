#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prototype function
* @n: variable for number of input
* Return: Always 0 (Success)
*
*/

void print_diagonal(int n)
{
int s;
int a;
if (n < 0)
{
  _putchar('\n');
}
else
{
for (s = 0; s < n; s++)
{
for (a = 0; a <= n; a++)
{
if(a == s)
{
_putchar('\\');
}
else if (a < s)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
 
