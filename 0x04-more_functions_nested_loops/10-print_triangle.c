#include "main.h"

/**
 * print_triangle - functionto print triangle
 * @size: parameter passed through the function
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces > 0; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
