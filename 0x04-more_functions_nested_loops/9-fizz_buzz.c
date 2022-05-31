#include <stdio.h>
/**
 *main - using for standard library
 *
 *Return: 0 for success
 */
int main(void)
{
int x;

for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz");
}
if (x % 3 == 0)
{
printf("Fizz");
}
if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", x);
}
printf(" ");
}
printf("\n");
return (0);
}
