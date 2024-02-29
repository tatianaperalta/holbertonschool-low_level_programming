#include <stdio.h>
#include "main.h"

/**
* print_line - prints lines
* @n: variable for number of underscore
* Return: Always 0 (Success)
*
*/

void print_diagonal(int n)
{
  int s, a;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
		  for (a = 0; a <= s; a++)
		    {
			_putchar(' ');
		    }
		  _putchar('\\');
		  _putchar('\n');
		}
	}
	else
	  {
	    _putchar('\n');
	  }
}
