#include "main.h"
/**
 *print_rev - will print a string in reverse
 *@s: variable used for string character
 *Return: always null for success
 */
void print_rev(char *s)
{
int t;

for (t = '\0'; t >= 0; t--)
{
while (s[t])
{
_putchar(s[t]);
}
}
_putchar('\n');
}
