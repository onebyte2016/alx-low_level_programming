#include "main.h"
/**
 * swap_int - function that swap two integers a and b
 *
 * @a: parameter for the first argument
 *
 * @b: Parameter for the second argument.
 */


void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
