#include "main.h"
/**
 * _pow_recursion - functin to return the value raised by power
 * @x: first parameter
 * @y: second parameter
 *
 * Return: Always 0.
 */


int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{

		return (-1);
	}
	else
	{

		return (x * _pow_recursion(x, y - 1));
	}
}
