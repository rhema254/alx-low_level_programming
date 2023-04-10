#include "main.h"

/**
 * set_bit - Fn that sets the value of a bit to 1 at a given index
 * @n: integer in the parameter
 * @index: is the index starting from 0 of the bit you want to set
 * Return: 1 if success otherwise -1
 */

int set_bit(unsigned long int *n, unsingned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index)| *n);
	return (1);
}
