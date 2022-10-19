#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase a-z 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char first_letter;
	char last_letter;

	while (i < 10)
	{
		first_letter = 'a';
		last_letter = 'z';

		while (first_letter <= last_letter)
		{
			_putchar(first_letter);
			first_letter++;
		}
		i++;
		_putchar('\n');
	}
}
