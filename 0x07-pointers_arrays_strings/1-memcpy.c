#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: destination of the copied memory 
 *@src: source data to be copied
 *@n: given by prompt
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;

for (k = 0; k < n; k++)
{
src[k] = dest[k];
}
return (dest);
}
