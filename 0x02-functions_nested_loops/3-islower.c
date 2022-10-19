#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: an integer
 * Return: 1 if c is an integer, 0 if c is not an integer
 */
int _islower(int c)
{
	int lwcase_init = 97;
	int lwcase_end = 123;

	while (lwcase_init < lwcase_end)
	{
		if ((int)c == lwcase_init)
		{
			return (1);
		}

		lwcase_init++;
	}
	return (0);
}
