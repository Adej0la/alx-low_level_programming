#include "variadic_functions.h"

/**
 * print_strings - print strings with a new line
 * @separator: this separates the string arguments
 * @n: the number of string arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	typedef unsigned int uint;
	uint i;
	char *c_str;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		c_str = va_arg(str, char*);

		if (c_str == NULL)
			printf("(nil)");
		else
			printf("%s", c_str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(str);
	printf("\n");
}
