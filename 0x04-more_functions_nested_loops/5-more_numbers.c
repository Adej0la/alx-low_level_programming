#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14, then a new line
 */
void more_numbers(void)
{
	int _min_digit = 48;
	int _max_digit;
	int _print_freq = 10;
	int _counter;
	int _tens;

	_counter = 0;
	while (_counter < _print_freq)
	{
		_tens = _min_digit;
		while (_tens < (2 + _min_digit))
		{
			_max_digit = 58;

			if (_tens == (1 + _min_digit))
			{
				_max_digit = _min_digit + 5;
			}

			while (_min_digit < _max_digit)
			{
				if (_tens == 49)
				{
				_putchar(_tens);
				}
				_putchar(_min_digit);
				_min_digit++;
			}
			_min_digit = 48;
			_tens++;
		}
			_putchar('\n');
			_counter++;
	}
}
