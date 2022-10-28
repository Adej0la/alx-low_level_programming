#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @s: a character string
 */
void puts_half(char *s)
{
	int i = 0;
	int j;
	int _strlen;
	int last_str;

	while (s[i] != 0)
	{
		i++;
	}

	_strlen = i;
	last_str = _strlen - 1;

	if (_strlen % 2 == 0)
	{
		j = _strlen / 2;
	}
	else
	{
		j = (_strlen / 2) + 1;
	}

		while (j <= last_str)
	{
			_putchar(s[j]);
			j++;
	}
	_putchar('\n');
}
