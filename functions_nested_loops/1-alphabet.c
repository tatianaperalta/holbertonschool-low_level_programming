#include <stdio.h>
#include "main.h"

/**
* print_alphabet: alphabet, in lowercase
* Return: 0
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
