#include "main.h"
#include <stdio.h>

/**
 * puts2 - funtion
 * @str: variable
 *
 * Return: nothing
 */
void puts2(char *str)
{
int count;
for (count = 0; str[count] != '\0'; count++)
if (count % 2 == 0)
{
_putchar(str[count]);
}
}
