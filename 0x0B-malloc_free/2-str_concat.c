#include "main.h"
#include <stdlib.h>

/**
 *str_concat - will concatenate two strings
 *@s1: string 1
 *@s2: string 2
 *Return: null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len1 = 0;
	int len2 = 0;
	int len3 = 0;
	int ex1 = 0;
	int ex2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len3 = (len1 + len2);
	s3 = malloc(sizeof(char) * len3 + 1);
	if (s3 == NULL)
		return (NULL);
	while (ex1 < len1)
	{
		len1++; 
		len1 = '\0';
	}
	while (ex2 < len2)
	{
		len2++;
		len2 = '\0';
	}
	return (s3);

}
