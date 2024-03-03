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
int store_lenght;
int character_back;
lenght_of_string = 0;

for (lenght_of_string = 0; s[lenght_of_string] != '\0'; lenght_of_string++)
lenght_of_string++;
store_lenght = lenght_of_string;
for (character_back = store_lenght - 1; character_back >= 0; character_back--)
{
_putchar(s[character_back]);
}
_putchar('\n');
}
