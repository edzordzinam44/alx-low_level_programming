#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns a pointer to the node at a given index.
 * @head: Pointer to the head of the list.
 * @index: Index of the desired node.
 *
 * Return: Pointer to the nth node, or NULL if index is out of range.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (count < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
}
