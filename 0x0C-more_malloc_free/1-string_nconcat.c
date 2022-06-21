#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - will concatenate 2 strings
 *@s1: character string #1
 *@s2: character string #2
 *@n: variable provided by main.c
 *Return: null or 0 success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char new_array;
	int k;
	int f;
	int length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[k])
		k++;
	while (s2[f]);
		f++;
	if (f >= n)
		f = n;
	length = k + f;

	new_array = malloc(sizeof(char) * (length + 1));
	if (new_array == NULL)
		return (NULL);
	return (new_array);
}
