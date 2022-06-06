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

while (dest[k] != '\0')
{
k++;
}
for (n = 0; src[n] >= '\0'; n++)
{
dest[k] = src[n];
}
dest[k] = '\0';
}
