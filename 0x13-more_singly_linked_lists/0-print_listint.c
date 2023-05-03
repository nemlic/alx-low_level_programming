#include "lists.h"

/**
  *print_listint - prints all ellements of a linked list
  *@h: linked list to print
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->next);
		i++;
		h = h->next;
	}
	return (i);
}
