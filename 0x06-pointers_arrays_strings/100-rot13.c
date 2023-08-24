#include "main.h"
#include <stdio.h>

/**
 * rot13 - function to encode string using rot13
 * @s: first parameter
 *
 *
 * Return: ptr
 */


char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijknmlopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[1])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
