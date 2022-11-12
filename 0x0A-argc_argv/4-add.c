#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive arguments
 * @argc: number of arguments
 * @argv: an array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		i = 1;
		sum = 0;
		while (i < argc)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);

			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}

	else
	{
		printf("0\n");
	}

	return (0);
}
