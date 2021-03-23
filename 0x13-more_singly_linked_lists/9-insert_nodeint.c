#include "lists.h"

/**
 * insert_nodeint_at_index - adds new node at given position
 * @head: first node in linked list
 * @idx: position to add node
 * @n: data for new node
 * Return: add of new node or NULL
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (i < idx - 1)
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
