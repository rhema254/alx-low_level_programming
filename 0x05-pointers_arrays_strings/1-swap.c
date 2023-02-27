#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: One of the integers to be swapped
 * @b: One of the integers to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i, j, k;

	k = *a;
	*a = *b;
	*b = k;
}
