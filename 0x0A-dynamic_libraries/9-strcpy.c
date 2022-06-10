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

while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (temp);
}
