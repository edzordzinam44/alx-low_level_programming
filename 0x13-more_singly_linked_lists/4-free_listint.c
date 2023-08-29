#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 */

void free_listint(listint_t *head)
{
	/* Check if the list is empty */
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
