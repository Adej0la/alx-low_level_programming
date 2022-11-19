#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between the numbers
 * @n: the number of numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	typedef unsigned int uint;
	uint i;
	va_list nb;

	va_start(nb, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nb, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(nb);
}
