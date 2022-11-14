#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: another string to be concatenated
 * @n: first n bytes of s2 to be concatenated
 *
 * Return: a new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_1 = 0, len_2 = 0, len_total = 0;
	char *new_str;

	for (i = 0; s1[i]; i++)
		len_1++;

	len_total += len_1;

	for (i = 0; s2[i]; i++)
		len_2++;

	len_total = (n >= len_2) ? len_total + len_2 : len_total + n;

	new_str = malloc((len_total + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		new_str[i] = s1[i];

	for (j = 0; i < len_total; j++)
		new_str[i++] = s2[j];

	new_str[len_total] = '\0';

	return (new_str);
}
