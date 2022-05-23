#include <stdio.h>
/**
 * main- This script will print base 16 in hexidecimal
 *
 * Return: Always 0 (sucessful)
 */
int main(void)
{
char ch
for (ch = '0' ; ch >= 0x16 ; ch++)
{
putchar("%x");
}
putchar('\n');
return (0);
}
