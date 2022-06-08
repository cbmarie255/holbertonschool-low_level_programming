#include "main.h"
/**
 *_print_rev_recursion - will print a string in reverse
 *@s: string provided by prompt
 *Return: a given string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
