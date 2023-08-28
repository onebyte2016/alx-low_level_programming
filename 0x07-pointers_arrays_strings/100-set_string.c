#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * set_string - copy memory for src to dest
 * @s: the address of memory to copy
 * @to: the address and size of the memory to copy
 *
 */

void set_string(char **s, char *to)
{

	*s = (char *)malloc(strlen(to) + 1);

	if (*s != NULL)
	{

		strcpy(*s, to);
	}
}
