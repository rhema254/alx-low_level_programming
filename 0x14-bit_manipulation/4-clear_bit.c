#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: parameter of the function
 * @index: the index of the bit you want to set
 * Return: 1 if successful, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
