#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the current place.
 * @n: Integer to add to the list.
 * Return: Pointer to the current position.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem, *current_node;

	new_elem = malloc(sizeof(listint_t));
	if (new_elem == NULL)
		return (NULL);
	new_elem->n = n;
	new_elem->next = NULL;
	if (*head == NULL)
	{
		*head = new_elem;
		return (*head);
	}
	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_elem;

	return (*head);
}
