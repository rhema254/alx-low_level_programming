#include "main.h"

/**
 * print_alphabet - prints out alphabets in lower case
 * followed by a newline
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
