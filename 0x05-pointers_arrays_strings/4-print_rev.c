#include "main.h"

/**
 * rev_string - reverses a string 
 * @s - the string to be reversed
 */

void rev_string(char *s)
{
	int i , j , k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	k = i;

	for (j = k - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
