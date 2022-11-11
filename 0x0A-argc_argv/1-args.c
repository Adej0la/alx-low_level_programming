#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, counter;

	if (argc > 1)
	{
		i = 1;
		counter = 0;
		while (i < argc)
		{
			counter++;
			i++;
		}
		printf("%d\n", counter);
	}
	else
	{
		i = 0;
		printf("%d\n", i);
	}
	return (0);
}
