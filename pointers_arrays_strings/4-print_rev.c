#include "main.h"
#include <stdio.h>

/**
 * print_rev - counts the lenght of the string
 * @s: variable
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int lenght_of_string;

for (lenght_of_string = 0; s[lenght_of_string] != '\0'; lenght_of_string++)
;
for (lenght_of_string --; lenght_of_string >= 0; lenght_of_string--)
{
_putchar(s[lenght_of_string]);
}
_putchar('\n');
}
