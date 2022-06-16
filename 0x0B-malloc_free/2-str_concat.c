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
	int k = 0;
	int f = 0;
	char *s3 = s1;

	while (s1[k] != '\0')
	{
		s3[f] = s1[k];
		k++;
		f++;
	}
	while (s2[k] != '\0')
	{
		s3[f] = s2[k];
		k++;
		f++;
	}
	s3[f] = '\0';
	if ((s1 == NULL) || (s2 == NULL) || (s3 == NULL))
	{
	return (NULL);
	}
	return (s3);
}
