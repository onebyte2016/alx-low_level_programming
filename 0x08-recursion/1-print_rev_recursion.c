#include "main.h"
/**
 * _print_rev_recursion - function to print reverse string
 * @s: character parameter
 *
 * Return: Always 0.
 */


void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{

		_print_rev_recursion(++s);
		_putchar(*s);
	}

}
