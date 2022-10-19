#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks for character in the alphabet
 * @c: an integer
 * Return: 1 if c is an integer, 0 if c is not an integer
 */
int _isalpha(int c)
{
	int lwcase_init = 97;
	int lwcase_end = 123;
	int upcase_init = 65;
	int upcase_end = 90;

	if (c > upcase_end)
	{
		while (lwcase_init < lwcase_end)
		{
			if (c == lwcase_init)
				return (1);

			lwcase_init++;
		}
	}
	else if (c <= upcase_end)
	{
		while (upcase_init < upcase_end)
		{
			if (c == upcase_init)
				return (1);

			upcase_init++;
		}
	}
	return (0);
}
