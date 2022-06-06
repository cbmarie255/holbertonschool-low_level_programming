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
char *begin = dest;

while (*src && n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (begin);
}
