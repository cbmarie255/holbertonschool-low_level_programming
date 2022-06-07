#include "main.h"
/**
 *_strspn - will get the length of a prefix substring
 *@s: string 1
 *@accept: string 2
 *Return: number of bytes from string accept
 */
unsigned int _strspn(char *s, char *accept)
{
int k = 0;
int f = 0;

while (*(s + k))
{
	while (*(accept + f))
	{
		if (*(s + k) == *(accept + f))
		{
			break;
		}
		f++;
	}
	if (!*(accept + f))
	{
		return (k);
	}
	k++;
}
return (f);
}
