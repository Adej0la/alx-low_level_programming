#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: a pointer to a pointer to a node
 *
 * Description: Function sets head to NULL
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return ();

	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}

	head = NULL;
}
