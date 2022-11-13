#include "main.h"

/**
 * getlen - recursively gets the length of a string
 * @str: the string which its length is to obtained
 *
 * Return: The length of string
 */
int getlen(char *str)
{
	if (*str == 0)
		return (0);

	return (1 + getlen((str + 1)));
}

/**
 * str_concat - concatenates two strings
 * @s1: initial string
 * @s2: second string to concatenate
 *
 * Return: A new string
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, new_len, i, j;
	char *new_str;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	s1_len = getlen(s1);
	s2_len = getlen(s2);
	new_len = s1_len + s2_len;

	new_str = malloc(sizeof(char) * (new_len + 1));

	i = 0;
	while (i < s1_len)
	{
		if (new_str == NULL)
			return (NULL);

		new_str[i] = s1[i];
		i++;
	}

	i = s1_len;
	j = 0;
	while (j <= s2_len)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}

	return (new_str);
}
