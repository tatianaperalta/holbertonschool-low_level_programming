#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int b;
for (b = 0; b < 10; b++)
{
putchar((b % 10) + '0');
}
putchar('\n');
return (0);
}
