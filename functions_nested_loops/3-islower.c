#include <stdio.h>
#include "main.h"

/**
* _islower - prints 0 if letter is uppercase, else 1
* @c: represents letter
* Return: Always 0 (Success)
*
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
