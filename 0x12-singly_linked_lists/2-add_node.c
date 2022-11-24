#include "lists.h"

/**
 * _strlen - gets the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

/**
 * add_node - adds new node at the beginning of list_t list
 * @head: pointer to pointer to the head node
 * @str: a constant character string
 *
 * Return: the address of the new node element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
