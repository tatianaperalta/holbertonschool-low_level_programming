#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints alphabet x10
*
* Return: Always 0 (Success)
*
*/

void print_alphabet_x10(void)
{
int n = 0;
while (n++ < 10)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
