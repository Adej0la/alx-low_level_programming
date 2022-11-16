#include "function_pointers.h"

/**
 * array_iterator - iterate over an array
 * @array: an array items
 * @size: size of array to be iterated
 * @action: action to be taken on array items
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (action != NULL && array != NULL)
			action(array[i]);
	}
}
