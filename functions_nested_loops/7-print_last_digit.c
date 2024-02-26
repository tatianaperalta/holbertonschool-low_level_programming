#include <stdio.h>
#include "main.h"

/**
* print_last_digit - prints module
* @n: represents values
* @l: represents module
* Return: Always 0 (Success)
*
*/

int print_last_digit(int n)
{
int l = n % 10;
if (l < 0)
l *= -1;
_putchar(l + '0');
return (0);
}
