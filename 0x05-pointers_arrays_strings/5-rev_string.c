#include "main.h"
/**
 *puts2 - using function to reverse a string
 *@s: value representing the string
 *Return: always null for success
 */
void rev_string(char *s)
{
int t = 0;

while (s[t] != '\0')
{
for (t = (t - 1); t >= 0; t--)
{
_putchar(s[t]);
}
}
_putchar ('\n');
}
