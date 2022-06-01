#include "main.h"
/**
 *_strlen - function will return the length of a string
 *@s: represents variable to find the length of a string
 *Return: always null for success
 */
int _strlen(char *s)
{
int t;
t = 0;
while (*s != '\0')
{
s++;
t++;
}
return (t);
}
