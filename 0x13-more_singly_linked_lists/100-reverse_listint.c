#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node in list
 * Return: pointer to first node of reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1;
	listint_t *tmp2;

	tmp1 = *head;
	if (tmp1 == NULL)
		return (NULL);
	tmp2 = tmp1->next;
	tmp1->next = NULL;

	while (tmp2 != NULL)
	{
		tmp1 = tmp2;
		tmp2 = tmp2->next;
		tmp1->next = *head;
		*head = tmp1;
	}
	return (*head);
}
