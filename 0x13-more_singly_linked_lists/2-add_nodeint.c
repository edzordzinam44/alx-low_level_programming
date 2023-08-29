#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the current place in the list.
 * @n: Integer to add to the list.
 * Return: Pointer to the current position.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare a pointer to a new node */
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
