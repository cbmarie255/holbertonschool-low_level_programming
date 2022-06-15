#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */
int main(void)
{
	int a, b, product;


	scanf("%lf %lf", &a, &b);
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	product = a * b;

	printf("%lf", product);
	return (0);
}
