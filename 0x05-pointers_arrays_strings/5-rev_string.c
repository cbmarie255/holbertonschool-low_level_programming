#include "main.h"
/**
 *puts2 - using function to reverse a string
 *@s: value representing the string
 *Return: always null for success
 */
void rev_string(char *s)
{
int b = 0;
int c = 0;
int e = 0;

while (s[c] != '\0')
{
c++;
}
for (b =0; b < c; b++)
{
e--;
_putchar(s[e]);
}
_putchar ('\n');
}
