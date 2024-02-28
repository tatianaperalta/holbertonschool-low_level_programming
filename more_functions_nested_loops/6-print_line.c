#include <stdio.h>
#include "main.h"

/**
* print_line - prints lines
*
* Return: Always 0 (Success)
*
*/

void print_line(int n)
{
	int s;
	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
