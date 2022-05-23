#include <stdio.h>
/**
 * main- This script will print in lowercase/uppercase characters
 *
 * Return: Always 0 (sucessful)
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
