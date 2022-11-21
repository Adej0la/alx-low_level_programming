#include "variadic_functions.h"

/**
 * _print_char - print character from argument list
 * @arg: pointer to list of arguments
 */
void _print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	printf("%c", ch);
}

/**
 * _print_int - print an integer from argument list
 * @arg: pointer to list of arguments
 */
void _print_int(va_list arg)
{
	int nb;

	nb = va_arg(arg, int);
	printf("%d", nb);
}

/**
 * _print_dbl - print a floating number from argument list
 * @arg: pointer to list of arguments
 */
void _print_dbl(va_list arg)
{
	float nb;

	nb = va_arg(arg, double);
	printf("%f", nb);
}

/**
 * _print_str - print a string
 * @arg: a pointer to list of arguments
 */
void _print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: the type format of the value to be printed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *init_str = "";
	char *delimiter = ", ";
	op_t ops[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_dbl},
		{"s", _print_str},
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (ops[j].ch)
		{
			if (*(ops[j].ch) == *(format + i))
			{
				printf("%s", init_str);
				ops[j].f(args);
				init_str = delimiter;
			}

			j++;
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
