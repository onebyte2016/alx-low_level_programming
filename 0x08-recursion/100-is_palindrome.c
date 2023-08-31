#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - check the code
 * @s: parameter
 * @start: second parameter
 * @end: third paramater
 *
 * Return: Always 0.
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{

		return (1);
	}

	if (s[start] != s[end])
	{

		return (0);
	}
	else
	{

		return (is_palindrome_helper(s, start + 1, end - 1));
	}
}

/**
 * is_palindrome - check the code
 * @s: parameter
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);


	if (length == 0)
	{
		return (1);
	}
	else
	{

		return (is_palindrome_helper(s, 0, length - 1));
	}
}
