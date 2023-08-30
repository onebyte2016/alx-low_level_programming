#include "main.h"
/**
 * _puts_recursion - function to print reverse string
 * @s: character parameter
 *
 * Return: Always 0.
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{

		_puts_recursion(++s);
		_putchar(*s);
	}

}
