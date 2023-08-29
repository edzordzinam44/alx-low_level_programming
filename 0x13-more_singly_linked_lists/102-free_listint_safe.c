#include "lists.h"

/**
 * free_listp2 - Frees a linked list
 * @head: Head of the list.
 *
 * Return: No return.
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while ((temp = current_node) != NULL)
		{
			current_node = current_node->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe -Frees a linked list
 * @h: Head of the list.
 *
 * Return: Size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new_node, *add_node;
	listint_t *current;

	hptr = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = hptr;
		hptr = new_node;

		add_node = hptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (*h == add_node->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
