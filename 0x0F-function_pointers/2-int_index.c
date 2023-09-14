#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - check the array integre size
 * @array: the integer to check
 * @size: size of array
 * @cmp: compare the integer
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
