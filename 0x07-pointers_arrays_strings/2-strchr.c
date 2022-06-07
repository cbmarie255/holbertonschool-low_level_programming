#include "main.h"
/**
 *_strchr - function returns a pointer to the 1st occurance of the character
 *@s: string used 
 *@c: given by the prompt
 *Return: a pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
do
{
if (*s == c)
{
return (s);
}
while (*s++);
}
return (0);
}
