#include "main.h"

/**
 * print_binary - Function that gives the binary equivalent of a number
 * @n: The number to be converted
 * Return: The converted number
 */

void print_binary(unsigned long int n)
{
	int j, count = 0;

	unsigned int long current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
