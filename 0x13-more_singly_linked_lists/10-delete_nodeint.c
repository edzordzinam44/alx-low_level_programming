#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next_node;

	if (!head || !*head)
		return (-1);

	current = *head;
	if (index == 0)
	{

		/* Delete the first node */
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}

	next_node = current->next;
	current->next = next_node->next;
	free(next_node);
	return (1);
}
