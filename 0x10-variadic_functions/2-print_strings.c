#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_strings - will print strings with a new line
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *Return: string or NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar ('\n');
	va_end(list);
}
