#include "main.h"

/**
 * print_sign - checks the sign on n
 * @n: is the integer being checked
 * Return: 1 if is n > 0, if n=0 and -1 if n<0
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar("+");
		return (1);
	}
	else if (n == 0)
	{
		_putchar("48");
		return (0);
	}
	else
	{
		_putchar("-");
		return (-1);
	}
}
