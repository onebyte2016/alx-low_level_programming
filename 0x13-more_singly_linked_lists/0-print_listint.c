#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: head pointer
 *
 * Return: Always return count
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t elementCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elementCount++;
	}

	return (elementCount);
}
