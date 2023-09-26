#include "lists.h"

/**
 * add_nodeint - function to add node
 * @head: pointer
 * @n: second parameter
 *
 * Return: rewnode
 *
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return newNode;
}
