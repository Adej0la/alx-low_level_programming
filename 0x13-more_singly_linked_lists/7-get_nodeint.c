#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at specified index;
 * @head: the head node to start count
 * @index: the specified node index
 *
 * Return: the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index == 0 && head != NULL)
		return (head);

	if (index >= 1)
	{
		while (head != NULL && count < index)
		{
			count++;
			head = head->next;
		}

		return (head);
	}

	return (NULL);
}
