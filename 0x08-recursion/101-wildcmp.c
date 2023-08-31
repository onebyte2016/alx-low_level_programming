#include "main.h"
/**
 * wildcmp_helper - check the code
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: Always 0.
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{

		return (1);
	}
	else if (*s2 == '*')
	{

		while (*s1 != '\0')
		{
			if (wildcmp_helper(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (wildcmp_helper(s1, s2 + 1));
	}
	else if (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2 || *s2 == '?'))
	{

		return (wildcmp_helper(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * wildcmp - check the code
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
