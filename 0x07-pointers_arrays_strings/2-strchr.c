#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Description: Returns a pointer to the first occurence of a character c in
 * the string s, or NULL if the string is not found
 * Return: A pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s != NULL && *(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}

	if (c == '\0')
		return (s + i + 1);

	if (i == 0 && c == '\0')
		return (s + 0);
	

	return (NULL);
}
