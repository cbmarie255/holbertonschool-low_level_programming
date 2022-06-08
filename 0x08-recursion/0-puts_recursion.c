#include "main.h"
/**
 *_puts_recursion -  will print a string followed by a new line
 *@s: character string given by prompt
 *Return: null or 0 for success
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s + '\0');
	_puts_recursion(s + 1);
}
