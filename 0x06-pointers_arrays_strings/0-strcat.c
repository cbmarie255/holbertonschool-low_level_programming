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

while (dest[k] != '\0')
{
k++;
}
for (f = 0; src [f] != '\0'; f++)
{
dest[k] = src[f];
}
dest[k] = '\0';
}
