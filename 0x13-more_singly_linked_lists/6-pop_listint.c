#include "lists.h"

/**
 * pop_listint - deletes the head node and returns data (n)
 * @head: pointer to pointer to a node
 *
 * Return: data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *prev;

	if (*head != NULL)
	{
		n = (*head)->n;
		prev = *head;
		*head = prev->next;
		free(prev);
	}

	return (n);
}
