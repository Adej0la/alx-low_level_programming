#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 * @size: the number of triangles
 */
void print_triangle(int size)
{
	int _counter_1;
	int _counter_2;
	int _counter_3;

	if (size > 0)
	{
		_counter_1 = 0;
		while (_counter_1 < size)
		{
			_counter_2 = size - 1;
			while (_counter_2 > _counter_1)
			{
				_putchar(' ');
				_counter_2--;
			}
			_counter_3 = -1;
			while (_counter_3 < _counter_1)
			{
			_putchar('#');
			_counter_3++;
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

