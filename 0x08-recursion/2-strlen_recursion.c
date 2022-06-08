#include "main.h"
/**
 *_strlen_recursion - will calculate the length of a string
 *@s: string provied by prompt
 *Return: always null for success
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
