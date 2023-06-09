#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints all elements of a list
 *@h: pointer to list_h being printed
 *
 *Return: string
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		s++;
		h = h->next;
	}
	return (s);
}

