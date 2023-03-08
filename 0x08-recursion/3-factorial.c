#include "main.h"

/**
 * factorial - Gtes the factorial of a number
 * @n: The number to get the factorial of
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
