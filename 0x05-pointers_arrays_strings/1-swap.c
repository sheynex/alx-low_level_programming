#include "main.h"

/**
*swap_int - swaps two integers' values
*@a: first integer
*@b: second integer
*Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int var1;

	var1 = *a;
	*a = *b;
	*b = var1;
}
