#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at specified index
 * @head: pointer to the head node
 * @index: the index of the node to be deleted
 *
 * Return: 1 if deletion is successful else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *xNode, *copy;

	if (index == 0 && *head != NULL)
	{
		xNode = *head;

		if (xNode->next != NULL)
			*head = xNode->next;
		else
			*head = NULL;

		free(xNode);
		return (1);
	}

	if (index >= 1)
	{
		count = 0;
		copy = *head;

		while (copy != NULL && count < (index - 1))
		{
			copy = copy->next;
			count++;
		}

		if (copy == NULL || copy->next == NULL)
			return (-1);

		xNode = copy->next;
		copy->next = xNode->next;

		free(xNode);
	}

	return (-1);
}
