#include "main.h"

/**
 * fizz_buzz - print numbers from 1 to 100;
 *
 * Description: for multiples of 3 print 'Fizz',
 * for multiple of 5 print 'Buzz', for multiple of
 * both 3 and 5, print 'FizzBuzz'
 */
void fizz_buzz(void)
{
	int limit = 101;
	int counter;

	counter = 1;

	while (counter < limit)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", counter);
		}
		if (counter != limit - 1)
		{
			putchar(' ');
		}
		counter++;
	}
	putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
