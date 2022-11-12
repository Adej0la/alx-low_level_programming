#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a
 * specific character
 * @size: a non-negative size of the array
 * @c: character to initialize the array with
 *
 * Return: a character array initialized with c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *char_arr;

	if (size > 0)
	{
		char_arr = malloc(sizeof(char) * size);
		i = 0;

		while (i < size)
		{
			if (char_arr == NULL)
			{
				return (NULL);
			}
			char_arr[i] = c;
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	return (char_arr);
}
