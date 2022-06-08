#include "main.h"
/**
 *_puts_recursion -  will print a string followed by a new line
 *@s: character string given by prompt
 *Return: null or 0 for success
 */
void _puts_recursion(char *s)
{
	int k = 0;

	if ((s[k] == "\0"))
	{
		_putchar('\n');
		return;
	}
	_putchar(s[k]);
	_puts_recursion(s[k]++);
}
