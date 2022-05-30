#include "main.h"
/**
 * print_numbers - prints the result of looped integers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
_putchar(n + 48);
}
_putchar('\n');
}
