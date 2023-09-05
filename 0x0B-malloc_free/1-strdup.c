#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to return pointer to string
 * @str: first parameter
 * Return: Always
 */

char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
		copy[i] = str[i];
	return (copy);
}
