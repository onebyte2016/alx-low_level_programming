#include "main.h"
#include <string.h>

/**
 * _strpbrk - copy memory for src to dest
 * @s: the address of memory to copy
 * @accept: the address and size of the memory to copy
 * Return: NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
