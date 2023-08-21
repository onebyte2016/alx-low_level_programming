#include "main.h"
/**
 * print_rev - function to print string in reverse order
 *
 *
 * @s: Parameter passed to the function
 */



void print_rev(char *s)
{
	int i;
	int stringLength = 0;


	while (s[stringLength] != '\0')
	{
		stringLength++;
	}


	for (i = stringLength - 1; i >= 0; i--)

	{
		putchar(s[i]);
	}

	putchar('\n');
}
