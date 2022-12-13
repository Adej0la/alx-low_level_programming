#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a number
 * @index: index of to be set to zero
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = ~(~(*n) | (1 << index));

	return (1);
}
