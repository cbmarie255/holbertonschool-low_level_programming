#include <stdio.h>
/**
 * main- This script will print numbers
 *
 * Return: Always 0 (sucessful)
 */
int main(void)
{
int x;
for (x = '0' ; x <= '9' ; x++)
{
putchar(x);
if (x < '9') 
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
