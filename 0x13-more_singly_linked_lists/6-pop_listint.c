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

	if (*head != NULL)
	{
		tmp = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (data);
}
