#include "holberton.h"
/**
 *_strncat - will mimic the strcat function
 *@dest: will be the final string returned
 *@src: will be appended to dest
 *@n: integer given by prompt
 *Return: always null for success
 */
char *_strncat(char *dest, char *src, int n)
{
int k = 0;
int f;

while (dest[k])
{
k++;
}
for (f = 0; f < n; f++)
{
if (src[f])
{
dest[k] = src[f];
k++;
}
else
{
break;
}
}
return (dest);
}
