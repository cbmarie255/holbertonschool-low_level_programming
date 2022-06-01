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
t++;
}
for (s[t] = (t - 1); s[t] >= 0; s[t]--)
{
_putchar(s[t]);
}
_putchar('\n');
}
