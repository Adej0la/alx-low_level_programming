#include "lists.h"

/**
 * add_nodeint - adds node at beginning of node list
 * @head: the head node
 * @n: a node structure member
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
