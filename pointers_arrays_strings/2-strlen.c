#include <stdio.h>
#include <string.h>

/**
 * _strlen - counts the lenght of the string
 * @s: varialbe
 *
 * Return: nothing
 */
int _strlen(char *s)
{
int c = 0;

for (c = 0; s[c] != '\0'; c++)
;
return (c);
}
