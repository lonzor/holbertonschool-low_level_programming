#include "lists.h"

/**
 * list_len - returns number of elements in the list
 * @h: the list
 * Return: the number of elements in linked list
 **/
size_t list_len(const list_t *h)
{
	size_t e;

	e = 0;
	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
