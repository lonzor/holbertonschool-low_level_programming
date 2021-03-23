#include "lists.h"

/**
 * get_nodeint_at_index - Finds node at certain index
 * @head: Pointer to first node
 * @index: The position of where to look for node
 * Return: The node or NULL if there isn't one
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		counter++;
	}
	return (head);
}
