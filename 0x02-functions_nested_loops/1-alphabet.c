#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	int i = 'a';
	char last_letter = 'z';

	for (; i <= last_letter; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
