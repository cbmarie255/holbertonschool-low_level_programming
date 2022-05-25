#include "main.h"
/**
 *print_last_digit - prints the ones place
 *@j: j is the generated number
 *Return: Always j.
 */
int print_last_digit(int j)
{
j = j % 10;
if (j < 0)
{
j = j * (-1);
}
_putchar(j + 48);
return (j);
}
