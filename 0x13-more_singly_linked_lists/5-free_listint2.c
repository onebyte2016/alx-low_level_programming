#include "lists.h"

/**
 * free_listint2 - function to free list
 * @head: pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;

}
