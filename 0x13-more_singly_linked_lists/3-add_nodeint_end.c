#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: a pointer to the head node
 * @n: a member of the listint_t structure
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t)), *lastNode;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;

	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;

		lastNode->next = node;
	}

	return (node);
}
