#include <stdio.h>
/**
 * main - Prints all posible combinations of single number digits
 * followed by a newline
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
