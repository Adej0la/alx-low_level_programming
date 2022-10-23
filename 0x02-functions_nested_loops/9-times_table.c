#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int _multiplier, _num, _product;

	_num = 0;
	while (_num <= 9)
	{
		_putchar('0');

		_multiplier = 1;
		while (_multiplier <= 9)
		{
			_putchar(',');
			_putchar(' ');

			_product = _num * _multiplier;

			if (_product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((_product / 10) + '0');
			}
			_putchar((_product % 10) + '0');

			_multiplier++;
		}
		_putchar('\n');
		_num++;
	}
}
