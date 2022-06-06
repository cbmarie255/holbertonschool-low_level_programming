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
int f = 0;

while (dest[k])
{
k++;
}
while (src [f])
{
dest[k] = src[f];
f++;
}
}
