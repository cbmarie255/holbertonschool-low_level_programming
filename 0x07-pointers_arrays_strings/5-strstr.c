#include "main.h"
/**
 *_strstr - finds the occurance of the substring needle in the string
 *@haystack: string 1
 *@needle: string 2
 *Return: a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
const char *k;
const char *f;
k = haystack;
f = needle;

if (*f == 0)
{
	return (haystack);
}
for (haystack = haystack; *haystack != 0; haystack += 1)
{
	if (*haystack != *f)
	{
		continue;
	}
	k = haystack;
	while (1)
	{
		if (*k++ != *f++)
		{
			break;
		}
		if (*f == 0)
		{
			return (haystack);
		}
	}
	f = needle;
}
return ('\0');
}
