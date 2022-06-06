#include "holberton.h"
/**
 *string_toupper - will change all lowercase letters to uppercase
 *@*: represents a pointer
 *
 *Return: always null for success
 */
char *string_toupper(char *)
{
int i;

for (i = 0; *[i] != '\0'; i++)
{
if (*[i] >= 'a' && *[i] <= 'z')
{
*[i] = *[i] - 32;
}
}
}
