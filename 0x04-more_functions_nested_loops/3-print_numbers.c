#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int _digit_min = 48;
	int _digit_max = 58;

	while (_digit_min < _digit_max)
	{
		_putchar(_digit_min);
		_digit_min++;
	}
	_putchar('\n');
}
