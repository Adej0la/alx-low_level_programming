#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * d: an instance of dog struct
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
