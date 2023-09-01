#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy memory for src to dest
 * @dest: the address of memory to copy
 * @src: the address and size of the memory to copy
 * @n: the number of byte to copy
 * Return: dest.
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
