#include "main.h"

/**
 * binary_to_uint - The function that converts a binary number to
 * an unsigned bit. 
 * @b: It is a pointer to a string of 0 and 1 characters.
 * Return: The converted number otherwise 0
 * if one or more chars in b are not 0 or 1
 * or 0 if b is NULL
 *
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int Number = 0;
	int n;

	if (b == NULL)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] != '0' || b[n] != '1')
		{
			return (0);
		}

		Number = 2 * Number + (b[n] - '0');
	}
	return (Number);
}

