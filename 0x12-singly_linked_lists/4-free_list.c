#include "lists.h"

/**
 * free_list - sets the list free
 * @head: pointer to list
 **/
void free_list(list_t *head)
{
	list_t *freedom;

	while (head)
	{
		freedom = head->next;
		free(head->str);
		free(head);
		head = freedom;
	}
}
