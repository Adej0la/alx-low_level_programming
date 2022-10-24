#include "main.h"

/**
 * mul - multiplies two integers
 * @a: an integer
 * @b: an integer
 * Return: an integer product of the passed arguments
 */
int mul(int a, int b)
{
	int _min_of_range = -2147483648;
	int _max_of_range = 2147483647;

	if (a < _min_of_range || a > _max_of_range)
	{
		return (0);
	}
	else if (b < _min_of_range || b > _max_of_range)
	{
		return (0);
	}
	else
	{
		return (a * b);
	}
}
