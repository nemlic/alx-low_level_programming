#include <stdlib.h>
#include "lists.h"

/**
  *free_list - frees a linked list
  *@head: pointer to list_t
  *
  */
void free_list(list_t *head)
{
	
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
