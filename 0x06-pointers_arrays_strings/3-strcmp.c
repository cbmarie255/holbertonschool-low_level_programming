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

while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0'))
{
s1++;
s2++;
i = *s1 - *s2;
}
return(i);
}
