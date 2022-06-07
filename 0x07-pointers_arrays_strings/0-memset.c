#include "main.h"
/**
 *_memset - will reference the memset function
 *@s: pointer to the block of memory to fill
 *@b: value to be set
 *@n: number of bytes to be set to the value
 *Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int k;

for (k = 0; k < n; k++)
{
s[k] = b;
}
return (s);
}
