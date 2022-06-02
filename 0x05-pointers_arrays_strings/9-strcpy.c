#include "main.h"
/**
 *_strcpy - will return a copy of a string
 *@dest: new destination
 *@src: is the data destination
 *Return: always null for success
 */
char *_strcpy(char *dest, char *src)
{
char *temp = dest;
int s = 0;
{
while (src[s] != '\0')
{
*temp = *src;
s++;
dest++;
}
dest[s] = '\0';
return (temp);
}
}
