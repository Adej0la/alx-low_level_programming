#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour_tens;
	int hour_units;
	int minute_tens;
	int minute_units;

	hour_tens = 0;
	while (hour_tens < 3)
	{
		hour_units = 0;
		while (hour_units < 4)
		{
			minute_tens = 0;
			while (minute_tens < 6)
			{
				minute_units = 0;
				while (minute_units < 10)
				{
					printf("%d%d:%d%d\n", hour_tens, hour_units, minute_tens, minute_units);
					minute_units++;
				}
				minute_units = 0;
				minute_tens++;
			}
			minute_tens = 0;
			hour_units++;
		}
		hour_tens++;
	}
}
