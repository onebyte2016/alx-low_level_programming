#include "main.h"

/**
 * puts2 - function to print string
 *
 * @str: parameter passed
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
