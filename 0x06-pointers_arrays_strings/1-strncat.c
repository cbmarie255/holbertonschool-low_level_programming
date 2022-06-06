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

while (dest[k])
{
k++;
}
for (n = 0; src[n] > dest[k]; n++)
{
dest[k] = src[n];
k++;
}
return (dest);
}
