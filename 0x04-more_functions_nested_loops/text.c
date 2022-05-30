#include <stdio.h>

int main(void)
{
int n, t;
for (t = 1; t <= 10; t++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9) 
{
putchar((n / 10) + '0');
}
putchar((n % 10) + '0');
}
putchar('\n');
}
}
