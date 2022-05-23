#include <stdio.h>
/**
 * main- This script will print hexidecimal 16
 *
 * Return: Always 0 (sucessful)
 */
int main(void)
{
int x;
char ch;
for (x = '0' ; x <= '9' ; x++)
{
putchar(x);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
