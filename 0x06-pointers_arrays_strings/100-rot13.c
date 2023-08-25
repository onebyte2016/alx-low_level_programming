#include "main.h"
#include <stdio.h>

/**
 * rot13 - function to encode string using rot13
 * @s: first parameter
 *
 *
 * Return: return the value of s
 *

 char *rot13(char *s)
 {
 int i, j;

 char a[] = "abcdefghijknmlopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
 char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
 }*/


/**
 * rot13 - encodes a string using rot13
 * @s: argument passed
 *
 * Return: result
 */

char *rot13(char *s)
{
	int x, y;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (s[x] == a[y])
			{
				s[x] = b[y];
				break;
			}
		}
	}

	     return (s);
}
