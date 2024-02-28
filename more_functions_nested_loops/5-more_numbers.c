#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints numbers x10
*
* Return: Always 0 (Success)
*
*/

void more_numbers(void)
{
	int x;
	int n;
	for (x = 0; x < 10; x++)
	{
		for (n = 0; n < 15; n++)
		{
			if ( n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
