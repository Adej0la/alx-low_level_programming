#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: points to a string of 0s and 1s
 *
 * Return: converted number or 0 if any character isn't 1 or 0 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, power, sum;
	int len;

	if (b == NULL)
		return (0);

	i = 0, len = 0;
	while (b[i] != '\0')
	{
		len++;
		i++;
	}

	power = 1, sum = 0, len--;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		sum += (b[len] - '0') * power;
		power *= 2;
		len--;
	}

	return (sum);
}
