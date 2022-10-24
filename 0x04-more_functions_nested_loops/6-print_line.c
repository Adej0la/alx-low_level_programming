#include "main.h"

/**
 * print_line - draws a straight line on terminal
 * @n: number of times the character '_' will be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int _counter = 0;
	int _line = 95;

	if (n > 0)
	{
		while (_counter < n)
		{
			_putchar(_line);
			_counter++;
		}
	}
	_putchar('\n');
}
