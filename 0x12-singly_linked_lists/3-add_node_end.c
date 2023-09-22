#include "lists.h"

/**
 * add_node_end - function to add nodes
 * @head: first parameter
 * @str: second parameter
 * Return: Always retunr head
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNodes, *tmp;
	unsigned int i, count = 0;

	newNodes = malloc(sizeof(list_t));
			if (newNodes == NULL)
			return (NULL);
			newNodes->str = strdup(str);
			for (i = 0; str[i] != '\0'; i++)
			count++;
			newNodes->len = count;
			newNodes->next = NULL;
			tmp = *head;
			if (tmp == NULL)
			*head = newNodes;
			else
			{
			while (tmp->next != NULL)
			tmp = tmp->next;
			tmp->next = newNodes;
			}
			return (*head);
			}
