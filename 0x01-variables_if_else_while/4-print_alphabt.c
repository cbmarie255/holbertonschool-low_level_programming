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
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar('\n');
return (0);
}
