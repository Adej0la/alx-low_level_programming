#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index;
 * @head: the head node
 * @idx: the index for insertion
 * @n: the data to be carried in the node
 *
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *newNode = malloc(sizeof(listint_t)), *copy = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0 && *head != NULL)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	if (idx >= 1)
	{
		while (copy != NULL && count < (idx - 1))
		{
			copy = (copy)->next;
			count++;
		}

		if (copy == NULL || copy->next == NULL)
			return (NULL);

		newNode->next = copy->next;
		copy->next = newNode;

		return (newNode);
	}

	return (NULL);
}
