#include <stdio.h>
#include "main.h"

/**
* _abs - prints absolute values
* @c: represents values
* Return: Always 0 (Success)
*
*/

int _abs(int c)
{
if (c <= 0)
{
return (-c);
}
return (c);
}
