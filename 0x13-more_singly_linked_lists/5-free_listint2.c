#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and set the head to NULL
 * @head: Double pointer to the first element in a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	node = *head;
	if (node == NULL)
		return;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
