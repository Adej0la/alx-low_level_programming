#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 *
 * Return: The integer sum of n parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	typedef unsigned int uint;
	uint i, sum;
	va_list nb;

	va_start(nb, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nb, int);
	}

	va_end(nb);

	return (sum);
}
