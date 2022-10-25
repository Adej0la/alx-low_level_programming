#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a string
 */
int _strlen(char *s)
{
	int i = 0;
	int counter = 0;

	while (s[i] != 0)
	{
		i++;
	}
	counter = i;

	return counter;
}
