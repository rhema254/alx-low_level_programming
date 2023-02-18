#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, i, k;

	for (j = 48; j < 58; j++)
	{
		for (i = 49; i < 58; i++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > i && i > j)
				{
					putchar(j);
					putchar(i);
					putchar(k);
					if (j != 55 || i != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

