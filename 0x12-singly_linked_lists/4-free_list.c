#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: No return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
