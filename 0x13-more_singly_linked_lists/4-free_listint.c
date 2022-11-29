#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
