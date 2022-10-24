#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int _min_digit = 48;
	int _max_digit = 58;
	int _digit_two = 2 + _min_digit;
	int _digit_four = 4 + _min_digit;

	while (_min_digit < _max_digit)
	{
		if (_min_digit == _digit_two || _min_digit == _digit_four)
		{
			_min_digit++;
		}
		_putchar(_min_digit);
		_min_digit++;
	}
	_putchar('\n');
}
