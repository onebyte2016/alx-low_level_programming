#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function for printing string
 *
 * @str: parameter passed.
 */

void puts_half(char *str)
{
	int stringLength = strlen(str);
	int begin_index, i;

	if (stringLength % 2 == 0)
	{
		begin_index = stringLength / 2;
	}
	else
	{
		begin_index = (stringLength - 1) / 2;
	}

	for (i = begin_index; i < stringLength; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
