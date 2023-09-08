#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - funtion to allocate momery
 * @b: first parameter
 * Return: Always return output
 */


void *malloc_checked(unsigned int b)
{

	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
