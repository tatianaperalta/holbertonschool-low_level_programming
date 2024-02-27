#include "main.h"
#include <stdio.h>

/**
* _isupper defines the int
* @c defines the parameter
* Return: Always 0.
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
