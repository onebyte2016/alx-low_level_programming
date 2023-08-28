#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - copy memory for src to dest
 * @a: the address of memory to copy
 * @size: the address and size of the memory to copy
 *
 */
void print_diagsums(int *a, int size)
{
	int primarySum = 0;
	int secondarySum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primarySum += a[i * size + i];
		secondarySum += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", primarySum);
	printf("%d\n", secondarySum);

}
