#include "lists.h"

/**
 * *add_nodeint_end - function to add nodeat the end
 * @head: pointer
 * @n: integer
 *
 * Return: newNode
 *
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
	}

	return (newNode);
}
