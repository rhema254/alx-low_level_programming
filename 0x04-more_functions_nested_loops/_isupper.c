#include "main.h"
/**
 * _isupper - check if character c is upper case
 * @c: The character to check
 *
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
