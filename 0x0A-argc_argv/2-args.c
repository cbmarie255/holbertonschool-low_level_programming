#include "main.h"
#include <stdio.h>

/**
 *main - printing arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: count
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc ; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
