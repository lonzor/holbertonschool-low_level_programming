#include "lists.h"

/**
 * delete_nodeint_at_index - deltes node at index of a linked list
 * @head: first node in linked list
 * @index: node location
 * Return: 1 if success and -1 if failure
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *delete;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	tmp = *head;
	while (i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	delete = tmp->next;
	tmp->next = delete->next;
	free(delete);
	return (1);
}
