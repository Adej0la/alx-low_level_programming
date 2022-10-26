#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: a character string
 */
void print_rev(char *s)
{
	int i = 0;
	int char_count;

	while (s[i] != 0)
	{
		i++;
	}

	char_count = i;
	while (char_count > 0)
	{
		_putchar(s[char_count - 1]);
		char_count--;
	}
	_putchar('\n');
}
