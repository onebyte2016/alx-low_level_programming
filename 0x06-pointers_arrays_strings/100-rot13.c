#include "main.h"
#include <stdio.h>

/**
 * rot13 - function to encode string using rot13
 * @s: first parameter
 *
 *
 * Return: return the value of s
 */

char *rot13(char *s)
{
	int i, j;

	char *a = "abcdefghijknmlopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
