#include "lists.h"

/**
 * sum_listint - returns the sum of all data of a linked list
 * @head: pointer to a node
 *
 * Return: the sum of n members in linked list
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
