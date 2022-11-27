#include "main.h"

/**
 * _realloc - reallocate a memory block with malloc and free
 * @ptr: a pointer to a memory block
 * @old_size: the size of the memory block
 * @new_size: the new size ptr should point to
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);

}
