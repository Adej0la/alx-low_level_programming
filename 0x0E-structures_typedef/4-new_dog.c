#include "dog.h"
#include <stdlib.h>

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
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age  = age;
	dog->owner = owner;

	return(dog);
}
