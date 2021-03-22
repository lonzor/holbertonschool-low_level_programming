#include "lists.h"

/**
 * add_nodeint - add node to beginning of list
 * @head: pointer to head of list
 * @n: int to add to the node
 * Return: addy of new node, or NULL if failure
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
