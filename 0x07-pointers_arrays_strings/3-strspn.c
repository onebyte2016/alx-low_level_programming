#include "main.h"
#include <stdio.h>
/**
 * _strspn - copy memory for src to dest
 * @s: the address of memory to copy
 * @accept: the address and size of the memory to copy
 * Return: lenght.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		length++;
		s++;
	}

	return (length);
}
