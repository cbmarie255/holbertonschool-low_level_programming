#include "holberton.h"
/**
 *_strcat - will mimic the function of strcat
 *@dest: file to concatenate
 *@src: string that will be appended to dest
 *Return: always null for success
 */
char *_strcat(char *dest, char *src)
{
int k = 0;
int f;

while (dest[k])
{
k++;
}
for (f = 0; src [f]; f++)
{
dest[k] = src[f];
}
}
