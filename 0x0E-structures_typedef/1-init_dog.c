#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the dog struct instance to be initialized
 * @name: the name property of the dog
 * @age: the age property of the dog
 * @owner: the owner property of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
