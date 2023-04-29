#include <stdlib.h>
#include "lists.h"

/**
  *free_list - frees a linked list
  *@head: pointer to list_t
  *
  */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
