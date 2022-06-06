#include "holberton.h"
/**
 *_strncpy - will mimic the strncpy function
 *@dest: will be the final string returned
 *@src: will be appended to dest
 *@n: integer given by prompt
 *Return: always null for success
 */
char *_strncpy(char *dest, char *src, int n)
{
int f;

for (f = 0; f < n; f++)
{
if (src[f])
{
src[f] = dest[f];
}
else
{
break;
}
}
return (dest);
}
