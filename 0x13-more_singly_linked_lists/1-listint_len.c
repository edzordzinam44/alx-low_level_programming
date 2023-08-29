#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked listint_t list.
 * @h: Pointer to the singly linked list.
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
