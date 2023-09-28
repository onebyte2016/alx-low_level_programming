#include "main.h"

/**
 * get_bit - func return the value of bits
 * @n: first parameter
 * @index: second parameter
 * Return: Always 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask;
	int bit_value;
	unsigned int numBits = sizeof(unsigned long int) * 8;

	if (index >= numBits)
	{
		return (-1);
	}
	 bitmask = 1UL << index;

	 bit_value = (n & bitmask) ? 1 : 0;


	return (bit_value);
}
