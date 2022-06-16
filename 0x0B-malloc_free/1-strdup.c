#include "main.h"
#include <stdlib.h>

/**
 *_strdup - will return a pointer to a new string
 *@str: original string
 *Return: null or new string
 */
char *_strdup(char *str)
{
	char *duplicate;
	char *holder;
	int k = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[k])
	{
		k++;
	}
	duplicate = malloc(k + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	holder = duplicate;
	while (*str)
	{
		*holder++ = *str++;
	}
	*holder = '\0';
	return (duplicate);
}
