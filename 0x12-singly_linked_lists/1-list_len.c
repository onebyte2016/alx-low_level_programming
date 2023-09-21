#include "lists.h"

/**
 * list_len - function for lenght of list
 * @h: parameter passed
 * Return: Always return something
 */

size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nodeCount++;
	}
	return (nodeCount);

}
