#include "main.h"
/**
 *puts2 - will print every other character
 *@str - represents the string
 *Return: always null for success
 */
void puts2(char *str)
{
int s = 0;
int t;

while (str[s] != '\0')
{
s++;
}
for (t = 0; t < s; t += 2)
{
_putchar(t);
}
_putchar('\n');
}
