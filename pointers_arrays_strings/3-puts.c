#include "main.h"

/**
 * _puts - counts the lenght of the string
 * @str: variable
 *
 * Return: nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
