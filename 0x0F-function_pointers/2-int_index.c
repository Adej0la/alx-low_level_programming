#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: comparator function to be used
 *
 * Return: index of integer if found, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp != NULL && array != NULL)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
