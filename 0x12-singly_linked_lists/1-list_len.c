#include "lists.h"

/**
 * list_len - Count the number of nodes in a list
 * @h: Pointer to the singly linked list
 * Return: Number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	int k;

	for (k = 0; h; k++)
		h = h->next;
	return (k);
}
