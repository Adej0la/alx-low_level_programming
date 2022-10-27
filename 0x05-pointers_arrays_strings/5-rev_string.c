#include "main.h"

/**
 * rev_string - reverse a string
 * @s: a character string
 */
void rev_string(char *s)
{
	int i = 0;
	int _strlen;
	int _str_idx;
	int _mid_idx;
	int temp;

	while (s[i] != 0)
	{
		i++;
	}

	_strlen = i;
	_mid_idx = _strlen / 2;
	_str_idx = _strlen - 1;

	while (_str_idx > _mid_idx)
	{
		temp = s[_strlen - 1 - _str_idx];
		s[_strlen - 1 - _str_idx] = s[_str_idx];
		s[_str_idx] = temp;
		_str_idx--;
	}
}
