#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - will concatenate 2 strings
 *@s1: character string #1
 *@s2: character string #2
 *@n: variable provided by main.c
 *Return: null or 0 success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_array;
	unsigned int k = 0;
	unsigned int f = 0;
	unsigned int length;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[k])
	{
		k++;
	}
	while (s2[f])
	{
		f++;
	}
	if (f >= n)
	{
		f = n;
	}
	length = k + f;
	new_array = malloc(sizeof(char) * (length + 1));
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < k; i++)
	{
		new_array[i] = s1[i];
	}
	for (i = 0; i < f; i++)
	{
		new_array[f + i] = s2[i];
	}
	new_array[length] = '\0';
	return (new_array);
}
