#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums all elements of a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all elements, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head)
	{
		/* Add the current node's value to the total sum */
		total_sum += head->n;
		head = head->next;
	}

	return (total_sum);
}
