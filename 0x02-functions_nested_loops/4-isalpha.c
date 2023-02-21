#include "main.h"

/**
 * _isalpha - checks whether int c is an alphabet
 * @c: is the int being checked
 * Return: 1 if c is an alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
