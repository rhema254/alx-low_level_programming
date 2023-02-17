#include <stdio.h>
/**
 * main - prints out an alphabet
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char AZ;

	for (AZ = 'a'; AZ <= 'z'; AZ++)
	{
		putchar(AZ);
	}	
	return (0);
}
