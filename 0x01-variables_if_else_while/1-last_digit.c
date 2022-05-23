#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- This script will display the last digit (n)
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n;
	int digit;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	printf("Last digit of %d is %d\n", n, digit);
	if (digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	if (digit == 0)
	{
	printf("Last digit of %d is %d\n", n, digit);
	}
	if (digit > 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
