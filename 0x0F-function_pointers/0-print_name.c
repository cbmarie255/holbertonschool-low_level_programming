#include "function_pointers.h"

/**
 *print_name - will print a name passed in by 0-main.c
 *@name: name of a user
 *@f: pointer to function
 *Return: name or NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	f(name);
}
