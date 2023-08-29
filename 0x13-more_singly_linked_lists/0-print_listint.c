#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: Pointer to the singly linked list.
 * Description: Ypu are allowed to use printf.
 *
 * Return: Number of elements in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t element_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		element_count++;
	}

	return (element_count);
}
