#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the first element from a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: The value stored in the removed node.
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *current_node, *temp_node;

	if (head == NULL)
		return (0);
	temp_node = current_node = *head;
	if (*head)
	{
		value = current_node->n;
		*head = current_node->next;
		free(temp_node);
	}
	else
		value = 0;
	return (value);
}
