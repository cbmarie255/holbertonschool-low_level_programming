#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- to print a message to user when an integer is randomized
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("%d is zero\n", n);
	return (0);
	}
	if (n > 0)
	{
	printf("%d is positive\n", n);
	return (0);
	}
	if (n < 0)
	{
	printf("%d is negative\n", n);
	return (0);
	}
	return (0);
}
