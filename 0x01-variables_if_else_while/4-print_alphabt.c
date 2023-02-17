#include <stdio.h>
/**
 * main - prints alphabet in lower case
 * followed by a newline
 * Return: 0 (Success)
 */

int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}
