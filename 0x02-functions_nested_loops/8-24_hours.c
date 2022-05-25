#include "main.h"
/**
 * jack_bauer - printing every minute of the day
 *@h: hour
 @m: minute
 * Return: Always 0.
 */
void jack_bauer(void)
{
int h = 0;
int m = 0;
for (h = 0; h < 24; h++)
{
for (m = 0; h < 60; m++)
{
_putchar((h/10) + '0');
_putchar((h%10) + '0');
_putchar(':');
_putchar((m/10) + '0');
_putchar((m%10) + '0');
_putchar('\n');
}
return (0);
}
}
