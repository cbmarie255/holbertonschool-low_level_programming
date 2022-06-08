#include "main.h"
/**
 *print_chessboard - will print a given chessboard
 *@a: array of characters
 *@row: rows
 *@column: column
 *Return: always null for success
 */
void print_chessboard(char (*a)[8])
{
int column;
int row;

for (row = 0; row < 8; row++)
{
	for (column = 0; column < 8; column++)
	{
		_putchar(a[row][column]);
		_putchar('\n');
	}
}
}
