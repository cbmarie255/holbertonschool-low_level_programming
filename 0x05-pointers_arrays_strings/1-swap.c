#include "main.h"
/**
 *swap_int - function used to swap integers
 *@a: integer 1
 *@b: integer 2
 *Return: null for success
 */
void swap_int(int *a, int *b)
{
*a = &b;
*b = &a;
}
