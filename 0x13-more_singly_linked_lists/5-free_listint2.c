#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Double pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node, *current_node;

	if (head == NULL)
		return;
	current_node = *head;
	while (current_node != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node);
	}
	*head = NULL;
}
