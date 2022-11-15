#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of array elements
 * @size: the size of the array elements
 *
 * Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *aux;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	aux = arr;

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		aux[i] = 0;

	return (arr);
}
