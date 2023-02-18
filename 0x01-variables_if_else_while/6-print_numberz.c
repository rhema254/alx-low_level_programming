#include <stdio.h>
/**
 * main - prints out numbers from zero to nine
 * followed by a newline
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 0;

	for (a = 48; a <= 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
