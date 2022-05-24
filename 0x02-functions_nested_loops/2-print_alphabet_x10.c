#include "main.h" 
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
while (x <= 10)
{
_putchar(x);
}
}
_putchar('\n');
}
