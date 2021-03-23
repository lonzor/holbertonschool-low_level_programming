#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 * @head: the first node in list
 * @n: int to be put in the new node
 * Return: addy to the new node or NULL if failure
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	tmp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
