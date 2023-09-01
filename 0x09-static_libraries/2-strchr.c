#include "main.h"
#include <stdio.h>

/**
 * _strchr - copy memory for src to dest
 * @s: the address of memory to copy
 * @c: the address and size of the memory to copy
 * Return: NULL if character
 *
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
