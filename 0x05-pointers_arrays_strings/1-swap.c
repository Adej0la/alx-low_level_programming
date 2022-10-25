#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to be swapped for second
 * @b: second integer to be swapped for first
 */
void swap_int(int *a, int *b)
{
	int temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;
}
