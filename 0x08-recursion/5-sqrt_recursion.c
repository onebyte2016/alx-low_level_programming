#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function for sqrt of numbers
 * @n: parameter passed
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	int sq = 1;

	int sqrtfun(int n, int sq);
	return (sqrtfun(n, sq));

}
/**
 * sqrtfun - function for sqrt of numbers
 * @sq: parameter passed
 * @n: parameter passed
 *
 * Return: Always 0.
 */

int sqrtfun(int n, int sq)
{

	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrtfun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
