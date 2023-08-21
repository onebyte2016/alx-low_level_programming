#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print array number
 *
 * @a: first parameter passed.
 * @n: second parameter passed
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);

		if (k < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
