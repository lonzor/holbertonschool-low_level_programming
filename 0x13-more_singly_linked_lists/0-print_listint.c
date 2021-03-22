#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 * @h: head of linked list
 * Return: count of elements
 **/
size_t print_listint(const listint_t *h)
{
	int e_count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			e_count++;
		}
	}
	return (e_count);
}
