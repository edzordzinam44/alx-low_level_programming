#include "lists.h"

/**
 * free_listp - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees all nodes in a linked list.
 * It takes a pointer to the head of the list and iterates
 * through the list, freeing each node's memory.
 */

void free_listp(listp_t **head)
{
	listp_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}


/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *visited_list, *new_node, *check_node;

	visited_list = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = visited_list;
		visited_list = new_node;

		check_node = visited_list;

		while (check_node->next != NULL)
		{
			check_node = check_node->next;
			if (head == check_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&visited_list);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&visited_list);
	return (nnodes);
}
