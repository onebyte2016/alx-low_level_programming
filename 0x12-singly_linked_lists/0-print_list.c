#include "lists.h"
#include <stdio.h>


/**
 * print_list - function toprint node list
 * @h: first node list
 * Return: Always return something
 */

size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		current = current->next;
		nodeCount++;
	}
	return (nodeCount);
}

