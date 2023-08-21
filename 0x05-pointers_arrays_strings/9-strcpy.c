#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function to print array number
 *
 * @dest: first parameter passed.
 * @src: second parameter passed
 *
 * Return: return original dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
