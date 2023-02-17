#include <stdio.h>
/**
 * main - prints out single digit numbers
 * single digit number start from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
