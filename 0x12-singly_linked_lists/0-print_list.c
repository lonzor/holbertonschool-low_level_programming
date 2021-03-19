#include "lists.h"

/**
 * print_list - Prints all the things in the list
 * @h: pointer to the head in the list
 * Return: how many nodes are in the list
 **/
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NUL
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			n++;
	}
	return (node_count);
}
