#include <stdio.h>
#include "main.h"
/**
 * is_prime_number_helper - check the divisor
 * @n: parameter
 * @divisor: second parameter
 *
 * Return: Always 0.
 */

int is_prime_number_helper(int n, int divisor)
{
	if (divisor <= 1)
	{

		return (1);
	}

	if (n % divisor == 0)
	{

		return (0);
	}
	else
	{

		return (is_prime_number_helper(n, divisor - 1));
	}
}

/**
 * is_prime_number - check the divisor
 * @n: parameter
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{

		return (is_prime_number_helper(n, n - 1));
	}
}
