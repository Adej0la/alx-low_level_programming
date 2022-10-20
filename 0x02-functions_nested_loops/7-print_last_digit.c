#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: an integer
 * Return: an integer
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		c = c * -1;
	}
	last_digit = c % 10;
	printf("%d", last_digit);
	return (last_digit);
}
