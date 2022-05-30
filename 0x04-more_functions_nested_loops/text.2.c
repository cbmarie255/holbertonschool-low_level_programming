#include <stdio.h>
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
if (n != '2' && n != '4')
{
putchar(n);
}
}
putchar('\n');
}
