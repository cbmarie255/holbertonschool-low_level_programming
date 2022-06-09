#include "holberton.h"
/**
 *cap_string - will capitalize all words of a string
 *@s: string to check for reverse
 *Return: 0
 */
char *cap_string(char *s)
{
int i = 0;

for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;

if ((s[i] = ','))
s[i] = s[i] - 44;

if ((s[i] = ';'))
s[i] = s[i] - 59;

if ((s[i] = '.'))
s[i] = s[i] - 46;

if ((s[i] = '!'))
s[i] = s[i] - 33;

if ((s[i] = '?'))
s[i] = s[i] - 63;

if ((s[i] = '"'))
s[i] = s[i] - 34;

if ((s[i] = '('))
s[i] = s[i] - 40;

if ((s[i] = ')'))
s[i] = s[i] - 41;

if ((s[i] = '{'))
s[i] = s[i] - 123;

if ((s[i] = '}'))
s[i] = s[i] - 125;
}
return (s);
}
