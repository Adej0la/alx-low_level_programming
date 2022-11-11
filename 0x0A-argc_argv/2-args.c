#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program name followed by newline
 * @argc: number of arguments
 * @argv: an array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
