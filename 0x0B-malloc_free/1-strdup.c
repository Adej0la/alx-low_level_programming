#include "main.h"

/**
 * _strdup - returns pointer to new string duplicate of string argument
 * @str: string to be duplicated
 *
 * Return: copy of str
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *arrcpy;

	if (str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		size = 0;
		i = 0;
		while (str[i])
		{
			size++;
			i++;
		}

		arrcpy = malloc((size + 1) * sizeof(char));

		i = 0;
		while (i <= size)
		{
			if (arrcpy == NULL)
			{
				return (NULL);
			}
			*(arrcpy + i) = *(str + i);
			i++;
		}
	}
	return (arrcpy);
}
