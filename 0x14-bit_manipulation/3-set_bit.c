#include "main.h"

/**
 * set_bit - function set value of bit to 1
 * @n: first paramater
 * @index: parametr
 * Return: Always return 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	unsigned int numBits = sizeof(unsigned long int) * 8;

	if (index >= numBits)
	{
		return (-1);
	}
	bitmask = 1UL << index;
	*n |= bitmask;
	return (1);


}
