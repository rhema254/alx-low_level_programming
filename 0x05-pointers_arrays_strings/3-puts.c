#include "main.h"
/**
 * _puts - prints a string
 * followed by a newline
 * @str: the string
 * Return: 0
 */

void _puts(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
