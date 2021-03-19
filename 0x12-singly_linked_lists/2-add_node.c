#include "lists.h"
#include <string.h>

/**
 * add_node - add a node to the beginning of list
 * @head: double pointer to the head of list
 * @str: string to be duplicated
 * Return: address of new element or NULL if failure
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;
	unsigned int i = 0;

	added_node = malloc(sizeof(list_t));

	if (added_node == NULL)
		return (NULL);
	added_node->str = strdup(str);

	while (str[i] != '\0')
	{
		i++;
	}
	added_node->len = i;
	added_node->next = *head;
	*head = added_node;
	return (*head);
}
