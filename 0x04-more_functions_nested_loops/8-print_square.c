#include "main.h"

/**
 * print_square - print a square followed by a new line
 * @size: the number of squares
 */
void print_square(int size)
{
	int _counter_1;
	int _counter_2;

	if (size > 0)
	{
		_counter_1 = 0;
		while (_counter_1 < size)
		{
			_counter_2 = 0;
			while (_counter_2 < size)
			{
				_putchar('#');
				_counter_2++;
			}
			_putchar('\n');
			_counter_1++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
