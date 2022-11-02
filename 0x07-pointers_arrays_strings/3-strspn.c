#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: substring to be matched
 *
 * Return: the number of bytes encountered before a mismatch
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
	unsigned int tracker = 0;

	i = 0;
	while (s[i])
	{
		j = 0;
		tracker = count;
		while (accept[j])
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		if (tracker == count)
		{
			break;
		}
		i++;
	}
	return (count);
}
