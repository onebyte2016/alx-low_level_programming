#include <string.h>
#include "main.h"

/**
 * _strstr - copy memory for src to dest
 * @haystack: the address of memory to copy
 * @needle: the address and size of the memory to copy
 * Return: NULL.
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
