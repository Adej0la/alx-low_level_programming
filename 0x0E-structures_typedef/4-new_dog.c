#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - get the length of a string
 * @c: a string
 *
 * Return: the length of string c
 */
int _strlen(char *c)
{
	int c_len = 0;

	while (c[c_len] != 0)
		c_len++;

	return (c_len);
}

/**
 * _strdup - duplicate a string
 * @c: a string
 *
 * Return: a duplicate of c
 */
char *_strdup(char *c)
{
	int len;
	char *dup;
	unsigned int i;

	len = _strlen(c);

	dup = malloc(sizeof(char) * len + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < (sizeof(char) * len); i++)
	{
		dup[i] = c[i];
	}

	dup[i] = '\0';

	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 *
 * Return: a pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_dup, *owner_dup;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_dup = _strdup(name);
	if (name_dup == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_dup = _strdup(owner);
	if (owner_dup == NULL)
	{
		free(name_dup);
		free(dog);
		return (NULL);
	}

	dog->name = name_dup;
	dog->age  = age;
	dog->owner = owner_dup;

	return (dog);
}
