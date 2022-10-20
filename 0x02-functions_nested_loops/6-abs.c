#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @c : a signed or unsigned integer
 * Return: an unsigned integer
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}

	return (c);
}
