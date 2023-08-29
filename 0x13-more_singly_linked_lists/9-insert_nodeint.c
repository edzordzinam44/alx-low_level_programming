#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: Pointer to the head of the list.
 * @index: Index at which to insert the new node.
 * @n: Value of the inserted node.
 *
 * Return: Pointer to the head of the modified list
 * Or NULL if insertion fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current, *new_node;

	current = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (index == 0)
	{
		/* Index at the beginning */
		new_node->next = current;
		*head = new_node;
		return (*head);
	}

	while (index > 1)
	{
		current = current->next;
		if (current == NULL)
		{
			/* Index out of range, cleanup and return ULL */
			free(new_node);
			return (NULL);
		}
		index--;
	}

	/* Insert at the desired index */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
