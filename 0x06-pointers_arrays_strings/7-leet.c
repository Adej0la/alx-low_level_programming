#include "main.h"

/**
 * leet - encodes a string into 1337 (leet)
 * @str: string to be encoded
 *
 * Return: A character string
 */
char *leet(char *str)
{
	int i, j;
	int leet[8] = {'O', 'L', '*', 'E', 'A', '*', '*', 'T'};
	int _arrlen = 8;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < _arrlen)
		{
			if (str[i] == leet[j] ||
					str[i] == leet[j] + 32)
			{
				str[i] = j + '0';
			}
			j++;
		}
		i++;
	}
	return (str);
}
