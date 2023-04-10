#include "main.h"

/**
 * get_endianness - It checks if a machine is a big endian or a large endian
 * Return: 0 if big endian, 1 is little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *x = (char *) &i;

	return (*x);
}

