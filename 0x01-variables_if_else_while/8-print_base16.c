#include <stdio.h>
/**
 * main - prints out numbers of base 16 in lowercase
 * followed by a newline
 * Return:0 (Success)
 */
int main(void)
{
	char az;
	int a;
	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (az = 97; az <= 102; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
