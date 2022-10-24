#include "main.h"

/**
 * print_diagonal - draws a straight line on terminal
 * @n: number of times the character '_' will be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int _counter_1;
	int _counter_2;
	int _space = 32;
	int _backslash = 92;

	if (n > 0)
	{
		_counter_1 = 0;
			while (_counter_1 < n)
			{
				_counter_2 = 0;
				while (_counter_2 < _counter_1)
				{
					_putchar(_space);
					_counter_2++;
				}
				_putchar(_backslash);
				_putchar('\n');
				_counter_1++;
			}
	}
	_putchar('\n');
}

