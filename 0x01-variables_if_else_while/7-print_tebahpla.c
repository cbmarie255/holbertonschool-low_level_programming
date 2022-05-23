#include <stdio.h>
/**
 * main- This script will print in lowercase/backwards characters
 *
 * Return: Always 0 (sucessful)
 */
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
