#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: The array of integers;
 * @n: The number of elements in integer to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;
	int j;
	int _strlen;

	while (a[i] != 0)
	{
		i++;
	}

	_strlen = i;

	if (n <= _strlen)
	{
		j = 0;

		while (j <= n - 1)
		{
			printf("%d", a[j]);

			if (j != n - 1)
			{
				printf(", ");
			}
			j++;
		}
		printf("\n");
	}
}
