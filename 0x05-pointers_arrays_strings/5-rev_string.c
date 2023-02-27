#include "main.h"

/**
 * rev_string - Reverses any given string
 * @s: the string to be reversed
 * Return: The string in reverse
 */

void rev_string(char *s)
{
	char h;
	int a, b, c;

	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	c = b - 1;
	
	for (a = 0; a >= b / 2; a++)
	{
		h = (s[a]);
		s[a] = s[c];
		s[c--] = h;
	}
}
