#include <stdio.h>

/**
* main - function
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
int n = 0;
int is_devidedby_3 = 0;
int is_devidedby_5 = 0;

for (n = 1; n <= 100; n++)
{
is_devidedby_3 = (n % 3) == 0;
is_devidedby_5 = (n % 5) == 0;
if (is_devidedby_3 && is_devidedby_5)
{
printf("FizzBuzz");
}
else if (is_devidedby_3)
{
printf("Fizz");
}
else if (is_devidedby_5)
{
printf("Buzz");
}
else
printf("%d", n);
if (n == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
