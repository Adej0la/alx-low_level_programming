#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: a pointer to a list node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);

		head = tmp;
	}
}
