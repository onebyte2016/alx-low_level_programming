#include "lists.h"

/**
 * listint_len - singly linked list
 * @h: head pointer
 *
 * Return: return count
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t numberCount = 0;

	while (h != NULL)
	{
		numberCount++;
		h = h->next;
	}

	return (numberCount);
}
