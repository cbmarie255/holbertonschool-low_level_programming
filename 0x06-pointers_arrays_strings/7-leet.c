#include "holberton.h"
/**
 *leet - will replace certain characters
 *@s: string given by prompt
 *Return: replacement character
 */
char *leet(char *s)
{
	int k = 0;
	char *replacement = s;
	char *letter = "aAeEoOtTlL";
	char *number = "4433007711";

	while (*s)
	{
		for (k = 0; letter[k]; k++)
		{
			if (*s == letter[k])
			{
			*s = number[k];
			}
		}
	s++;
	}
	return (replacement);
}
