#include "lists.h"

/**
  *listint_len - returns number of items in linked list
  *@h: list to be traversed
  *Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
