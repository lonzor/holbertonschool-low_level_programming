#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at end of list
 * @head: double pointer to struct
 * @str: the string to be duplicated
 * Return: addy of new element or NULL if failure
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p_node = *head;
	list_t *added_node;
	unsigned int i = 0;

	added_node = malloc(sizeof(list_t));

	if (added_node == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	added_node->str = strdup(str);
	added_node->len = i;
	added_node->next = NULL;

	if (*head == NULL)
	{
		*head = added_node;
		return (added_node);
	}
	else
	{
		while (p_node->next != NULL)
		{
			p_node = p_node->next;
		}
		p_node->next = added_node;
	}
	return (added_node);
}
