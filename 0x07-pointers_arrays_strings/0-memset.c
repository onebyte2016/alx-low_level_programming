#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: second patremete
 *
 * Return:s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
