#include "lists.h"

/**
 * free_listint - frees the list
 * @head: pointer to first node in list
 * Return: nothing
 **/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
