#include "lists.h"

/**
 * listint_len - Counts how many elements in listint_t
 * @h: head of linked list
 * Return: count of elements
 **/
size_t listint_len(const listint_t *h)
{
	int e_count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			e_count++;
		}
	}
	return (e_count);
}
