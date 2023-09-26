#include "lists.h"

/**
 * free_listint - function to free the list
 * @head: pointer
 * Return: return current
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
