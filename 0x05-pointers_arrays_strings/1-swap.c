#include "main.h"
/**
 *swap_int - swaps thes value of two integers
 *@a: pointer 1
 *@b: pointer 2
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
