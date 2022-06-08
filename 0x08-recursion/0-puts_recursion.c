#include "main.h"
/**
 *_puts_recursion -  will print a string followed by a new line
 *@s: character string given by prompt
 *Return: null or 0 for success
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		*s++;
	}
	_puts_recursion(s + 1);
	_putchar('\n');
}
