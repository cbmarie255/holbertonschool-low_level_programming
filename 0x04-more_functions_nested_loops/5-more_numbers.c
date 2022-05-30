#include "main.h"
/**
 *more_numbers - prints data stored in a variable
 *
 *Return: 0 for success
 */
void more_numbers(void)
{
int n, t;
for (t = 1; t <= 10; t++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
