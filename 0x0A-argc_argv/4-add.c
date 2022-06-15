#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - main
 *@argc: count
 *@argv: vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; b < argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
