#include "main.h"
#include <stdio.h>

/**
 *main - printing a program's name
 *@argc: argument count
 *@argv: argument vector
 *Return: filename or 0
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
