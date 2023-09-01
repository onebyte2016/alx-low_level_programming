#include "main.h"
/**
 * _strlen - function to calculate the lenght of character
 *
 * @s: Parameter passed
 *
 * Return: return the lenght
 */


int _strlen(char *s)
{
	int stringLength = 0;

	while (*s != '\0')
	{
		stringLength++;
		s++;
	}
	return (stringLength);
}
