#include "lists.h"

/**
 * add_node - functiont to add  node
 * @head: first parameter
 * @str: second parameter
 * Return: Always returnhead
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNodes;
	unsigned int i, count = 0;

	newNodes = malloc(sizeof(list_t));
	if (newNodes == NULL)
		return (NULL);
	newNodes->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newNodes->len = count;
	newNodes->next = *head;
	*head = newNodes;
	return (*head);
}
