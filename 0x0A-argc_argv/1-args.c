#include "main.h"
#include <stdio.h>

/**
 *main - printing arguments
 *@argc: argument count
 *@argv: argument vector
 *@k: variable used to count
 *Return: count
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc ; k++)
	{
		printf("%s\n", argv[k]);
	}
}
