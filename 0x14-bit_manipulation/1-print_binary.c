#include "main.h"

/**
 * print_binary - Function to print a binary equivalent of a number
 * @n: Parameter of the function.
 * Return: Binary Number.
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> 1;

		if (current & 1)
			_putchar('1');
			count ++;

		else if (count)
		_putchar('0');
	}
	if (!count)
	_putchar('0');
}

