#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * followed by a newline
 */

void print_alphabet_x10(void)
{
	int a;
	char az;

	a = 0;

	do {
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		a++;
		_putchar('\n');
	}while (a < 10);
}
