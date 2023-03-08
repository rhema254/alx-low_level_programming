#include "main.h"

/**
 * _pow_recursion - returns the value of x ^ y
 * @x: value to raise
 * @y: power
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x ^ y));
}
