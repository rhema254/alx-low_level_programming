#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string in the function
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
return (a);
}
