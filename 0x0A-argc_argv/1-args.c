#include "main.h"
#include <stdio.h>

/**
 *main - printing arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: count
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
