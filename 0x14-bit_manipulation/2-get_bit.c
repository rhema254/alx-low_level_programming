#include "main.h"

/**
 * get_bit - FUnction that gives the value of a bit at a given index
 * @n: The parameter to use
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ind;

	if (n == 0 && index <63)
		return (0);

	for (ind = 0; ind <= 63; ind++)
	{
		if (index == ind)
		{
			return (n & 1);
		}

	}

	return (-1);
}
