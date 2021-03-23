#include "lists.h"

/**
 * pop_listint - deletes head of linked list and returns its data
 * @head: first node in list
 * Return: data in head
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
