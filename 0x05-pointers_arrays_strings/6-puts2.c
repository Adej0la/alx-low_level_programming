#include "main.h"

/**
 * puts2 - prints first string character and every other character
 * @s: a character string
 */
void puts2(char *s)
{
	int i = 0;
	int j = 0;
	int _strlen;
	int last_str;

	while (s[i] != 0)
	{
		i++;
	}

	_strlen = i;
	last_str = _strlen - 1;

	while (j <= last_str)
	{
		if (j % 2 != 0)
		{
			j++;
		}
		else
		{
			_putchar(s[j]);
			j++;
		}
	}
	_putchar('\n');
}
