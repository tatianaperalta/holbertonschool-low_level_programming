#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: variable
 * @b: variable
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int p;

p = *a;
*a = *b;
*b = p;
}
