#include "lists.h"

/**
 * pop_listint - function to delete the head node
 * @head: pointer to the list
 * Return: return data.
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	listint_t *temp = *head;
	int data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
