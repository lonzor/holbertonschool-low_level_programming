#include "lists.h"

/**
 * sum_listint - Sums all data in linked list
 * @head: First node in list
 * Return: int sum of all the data in the nodes
 **/
int sum_listint(listint_t *head)
{
	int data_sum;

	data_sum = 0;
	while (head != NULL)
	{
		data_sum = data_sum + head->n;
		head = head->next;
	}
	return (data_sum);
}
