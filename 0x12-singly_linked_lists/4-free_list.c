#include <stdlib.h>
#include "lists.h"

/**
  *free_list - frees a linked list
  *@head: pointer to list_t
  *
  */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str == NULL);
		free(head);
		head = head->next;
	}
}
