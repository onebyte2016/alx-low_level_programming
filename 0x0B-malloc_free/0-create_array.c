#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - function to create array
 * @size: first parameter
 * @c: second parameter
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(char) * size);
	if (new == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		new[j] = c;
	}
	return (new);

}
