#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - function to concantenate string
 * @n: first parameter
 *
 *
 * Return: dest
 */



int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}


/**
 * printHexes - function to hexes
 * @b: first parameter
 *
 * @start: second parameter
 * @end: third parameter
 *
 * Return: dest
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
		{
			printf("%02x", *(b + start + i));
		}
		else
		{
			printf("  ");
		}
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - function to print ascii code
 * @b: first parameter
 *
 * @start: second parameter
 * @end: third parameter
 *
 * Return: dest
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - function to print buffer
 * @b: first parameter
 *
 * @size: second parameter
 *
 * Return: dest
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
