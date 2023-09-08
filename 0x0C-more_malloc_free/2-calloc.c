#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function to allocate memory
 * @nmemb: first parameter
 * @size: second parameter
 * Return: Always return result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
