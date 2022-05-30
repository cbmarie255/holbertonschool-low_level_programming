#include "main.h"
/**
 * _putchar - prints the result of a variable
 *@n: n represents the result of a statement
 * Return: Always 0.
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
