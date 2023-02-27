#include "main.h"

/**
 * rev_string - Reverses any given string
 * @s: the string to be reversed
 * Return: The string in reverse
 */

void rev_string(char *s)
{
	int a, b, c;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a;

	for (b = c - 1; b >= 0; b--)
	{
		return (s[b]);
	}
}
