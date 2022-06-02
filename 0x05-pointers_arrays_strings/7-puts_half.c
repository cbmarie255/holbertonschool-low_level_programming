#include "main.h"
/**
 *puts_half - will print the last half of a string
 *@str: references a given string
 *Return: null for success
 */
void puts_half(char *str)
{
int c = 0;
int h;

while (str[c] != '\0')
{
c++;
}
if (c % 2 == 0)
{
for ((h = (c / 2)); h > c; h++)
{
_putchar(str[h]);
}
}
else 
{
for ((h = (c - 1) / 2)); h < c; h++)
{
_putchar(str[h]);
}
}
_putchar('\n');
}
