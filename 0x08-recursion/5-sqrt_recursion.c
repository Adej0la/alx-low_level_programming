#include "main.h"

/**
 * find_sqrt - tests a root against a square
 * @sqr: an integer square to be tested against
 * @root: integer root to be tested
 *
 * Return: an integer
 */
int find_sqrt(int sqr, int root)
{
	if (root * root == sqr)
		return (root);
	if (root == sqr / 2)
		return (-1);
	return (find_sqrt(sqr, root + 1));
}

/**
 * _sqrt_recursion - recursively finds the square root of a number
 * @n: an integer square
 *
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	int root_init = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root_init));
}
