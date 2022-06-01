#include "main.h"
/**
 *puts2 - using function to reverse a string
 *@s: value representing the string
 *Return: always null for success
 */
void rev_string(char *s)
{
int t = 0;
int l = 0;

while (s[t] != '\0')
{
t++;
}
for (l = (t - 1); l <= 0; l--)
{
_putchar(s[l]);
}
_putchar ('\n');
}
