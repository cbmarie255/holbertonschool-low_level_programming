#include "main.h"
/**
 * _isalpha - checks for an alphabetic letter
 * @c: is a letter
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
