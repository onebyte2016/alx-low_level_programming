#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int number = 612852475143;

	int largestPrimeFactor = 2;

	while (number > 1)
	{
		if (number % largestPrimeFactor == 0)
		{
			number /= largestPrimeFactor;
		}
		else
		{
			largestPrimeFactor++;
		}
	}

	printf("%d\n", largestPrimeFactor);

	return (0);
}

