#include "main.h"

/**
 * binary_to_uint - function to covert binary to integer
 * @b: pointer to the char string
 * Return: Always return 0
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int output = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		output = output * 2 + (b[i] - '0');
	}
	return (output);
}
