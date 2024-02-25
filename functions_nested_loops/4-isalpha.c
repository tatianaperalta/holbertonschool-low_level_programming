#include <stdio.h>
#include "main.h"

/**
* _isalpha - prints 1 if letter is uppercase or lowercase, else 1
* @c: represents letter
* Return: Always 0 (Success)
*
*/

int _isalpha(int c)
{
if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
return (1);
else
return (0);
}
