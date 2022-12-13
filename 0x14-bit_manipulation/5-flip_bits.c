#include "main.h"

/**
 * flip_bits - return number of bits needed to change n to m
 * or vice versa
 * @n: a number
 * @m: another number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bigger = n, smaller = m;
	unsigned int count = 0;

	if (n < m)
	{
		bigger = m;
		smaller = n;
	}

	if ((bigger & 1) != (smaller & 1))
		count++;

	while (bigger >= 1)
	{
		if (((bigger >> 1) & 1) != ((smaller >> 1) & 1))
			count++;

		smaller >>= 1;
		bigger >>= 1;
	}

	return (count);
}
