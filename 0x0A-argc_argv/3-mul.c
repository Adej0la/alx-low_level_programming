#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies integer arguments
 * @argc: number of arguments
 * @argv: an array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, result;

	if (argc > 1)
	{
		i = 1;
		result = 1;
		while (i < argc)
		{
			if (argv[i])
			{
				result *= atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", result);
	}

	else
	{
	printf("Error\n");
	return (1);
	}
	
	return (0);
}
