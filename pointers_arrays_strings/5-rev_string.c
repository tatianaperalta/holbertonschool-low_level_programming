#include "main.h"
#include <stdio.h>

/**
 * rev_string - funtion to reverse the string
 * @s: variable
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int length;
int start;
int end;
char x;

if (s == NULL)
return;

length = 0;

while (s[length] != '\0')
{
length++;
}
start = 0;
end = length - 1;

while (start < end)
{
x = s[start];
s[start] = s[end];
s[end] = x;
start++;
end--;
}
}
