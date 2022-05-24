#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int x, y;
for (y = 0; y <= 9; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
