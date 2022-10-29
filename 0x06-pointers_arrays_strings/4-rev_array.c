#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements in array
 */
void reverse_array(int *a, int n)
{
	int mid_idx = n / 2;
	int last_idx = n - 1;
	int tmp;

	while (last_idx >= mid_idx)
	{
		tmp = a[n - 1 - last_idx];
		a[n - 1 - last_idx] = a[last_idx];
		a[last_idx] = tmp;
		last_idx--;
	}
}
