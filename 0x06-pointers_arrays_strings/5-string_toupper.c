#include "holberton.h"
/**
 *string_toupper - will change all lowercase letters to uppercase
 *@s: represents a pointer
 *Return: always null for success
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
return (s);
}
