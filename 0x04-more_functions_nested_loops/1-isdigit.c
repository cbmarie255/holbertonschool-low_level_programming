#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 *@c: variable used to check for a digit
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (_isdigit(c + '0'))
{
return (1);
}
else
{
return (0);
}
}
