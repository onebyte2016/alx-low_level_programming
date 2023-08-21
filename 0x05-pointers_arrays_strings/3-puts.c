#include "main.h"
/**
 * _puts - function to print string
 *
 * @str: parameter
 */



void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
