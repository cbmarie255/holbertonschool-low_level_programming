#include "main.h"
/**
 *_puts - function that prints string to stdout
 *@str: represents a string
 *Return: always null for success
 */
void _puts(char *str)
{
int t;

t = 0;
while (str[t] != '\0')
{
_putchar(str[t]);
t++;
}
}
