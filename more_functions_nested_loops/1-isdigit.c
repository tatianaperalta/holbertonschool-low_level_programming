#include "main.h"
#include <stdio.h>

/**
* _isdigit - function to digit
* @c: defines the parameter
* Return: Always 0.
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
