#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function print the length of string
 * @s: parameter passed
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}

}
