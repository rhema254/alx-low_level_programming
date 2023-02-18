#include <stdio.h>
/**
 * main - prints lower case alphabet in reverse
 * followed by a newline
 * Return: 0 (Success)
 */

int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
