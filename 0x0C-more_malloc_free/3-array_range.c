#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the min value to be included in array
 * @max: the max value to be included in array
 *
 * Return: an array
 */
int *array_range(int min, int max)
{
	int i, length, size, *array;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;
	size = sizeof(int);
	array = malloc(size * length);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (size * length) && min <= max; i++)
	{
		*(array + i) = min++;
	}

	return (array);
}
