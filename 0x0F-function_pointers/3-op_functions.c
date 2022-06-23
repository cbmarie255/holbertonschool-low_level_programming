#include "3-calc.h"

/**
 *op_add - will add two integers
 *@a: provided by checker
 *@b: provided by checker
 *Return: a & b added
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - will subtract two integers
 *@a: provided by checker
 *@b: provided by checker
 *Return: a & b subtracted
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - will multipy two integers
 *@a: provided by checker
 *@b: provided by checker
 *Return: a & b multiplied
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - will multipy two integers
 *@a: provided by checker
 *@b: provided by checker
 *Return: a & b divided (if possible)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - will get the remainder of two integers
 *@a: provided by checker
 *@b: provided by checker
 *Return: a & b mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
