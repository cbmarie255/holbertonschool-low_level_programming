#include "main.h"
/**
 *_strstr - finds the occurance of the substring needle in the string
 *@haystack: string 1
 *@needle: string 2
 *Return: a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
	if ((*haystack == * needle) && (*haystack != '\0' && *needle != '\0'))
		return (haystack);
	haystack++;
}
return ('\0');
}
