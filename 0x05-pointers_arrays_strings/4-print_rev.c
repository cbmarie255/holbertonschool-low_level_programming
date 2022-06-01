#include "main.h"
/**
 *print_rev - will print a string in reverse
 *@s: variable used for string character
 *Return: always null for success
 */
void print_rev(char *s)
{
int t;

while (s[t] != '\0')
{
t++;
}
for (t = (t - 1); t >= 0; t--)
{
_putchar(s[t]);
}
_putchar('\n');
}
