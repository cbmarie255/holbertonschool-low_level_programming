#include "main.h"
/**
 *print_rev - will print a string in reverse
 *@s: variable used for string character
 *Return: always null for success
 */
void print_rev(char *s)
{
int t;
int l;

while (s[t] != '\0')
{
_putchar(s[t]);
t++;
}
for (l = (t -1); l >= 0; l--)
{
_putchar(l);
}
_putchar('\n');
}
