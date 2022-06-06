#include "holberton.h"
/**
 *_strcmp - will mimic the strcmp function
 *@s1: string 1
 *@s2: string 2
 *Return: always null for success
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

if (s1[i] == s2[i])
{
return (0);
}
if (s1[i] != s2[i])
{
return (s1-s2);
}
}
