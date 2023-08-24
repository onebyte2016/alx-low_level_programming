#include "main.h"
#include <stdio.h>

/**
 * _strcat - function to calculate string
 *
 * @dest: first parameter
 * @src: second paramater
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = scr[c2];
	return (dest);
}
