#include <stdio.h>
/**
 * main- This script will print the entire alphabet in lowercase omitting q & e
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
putchar('\n');
return (0);
}
