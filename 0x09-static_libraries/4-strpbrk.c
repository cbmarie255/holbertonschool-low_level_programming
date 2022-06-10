#include "main.h"
/**
 *_strpbrk - locates first occurance in a string
 *@s: string 1
 *@accept: string 2
 *Return: a pointer to byte s, or null if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
	for (k = 0; accept[k]; k++)
	{
		if (*s == accept[k])
		return (s);
	}
	s++;
}
return ('\0');
}
