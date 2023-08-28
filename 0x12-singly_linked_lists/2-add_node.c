#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @str: String to be stored in the new node.
 * Description: allowed to use strdup
 * @head: Pointer to the head of the linked list.
 *
 * Return: The new element of address or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		content[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
