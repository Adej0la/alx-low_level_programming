#include "main.h"

/**
 * _isdigit - Checks for a digit;
 * @c: a character
 * Return: 1 if uppercase, 0 if not
 */
int _isdigit(char c)
{
	int _min_digit = 48;
	int _max_digit = 58;

	while (_min_digit < _max_digit)
	{
		if (c == _min_digit)
		{
			return (1);
		}
		_min_digit++;
	}
		return (0);
}
