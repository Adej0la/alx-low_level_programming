#include "main.h"

/**
 * _isupper - Checks for uppercase character;
 * @c: a character
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(char c)
{
	int _min_char = 65;
	int _max_char = 91;

	while (_min_char < _max_char)
	{
		if (c == _min_char)
		{
			return (1);
		}
		_min_char++;
	}
		return (0);
}
