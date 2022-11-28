#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string which its length is to be found
 *
 * Return: the length of the input string
 */
int _strlen(char *str)
{
	int count = 0;

	while (str != NULL && str[count])
	{
		count++;
	}

	return (count);
}

/**
 * _strstr - matches and returns a substring
 * @haystack: the string to be searched
 * @needle: the string to be searched for
 *
 * Return: the matched string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len_needle, init;

	len_needle = _strlen(needle);

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while ((j < len_needle) && (haystack[i] == needle[j]))
		{
			if (needle[0] == haystack[i])
			{
				init = i;
			}

			if (j == len_needle - 1)
				return (haystack + init);
			j++;
			i++;
		}
		i++;
	}

	return (NULL);
}
