#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @ac: aument count
 * @av: aument vector
 *
 * Return: 0 on success, 98 on wrong aument, 99 on non-operator, 100 on
 * infinite division
 */
int main(int ac, char *av[])
{
	if (ac == 4)
	{
		if (get_op_func(av[2]))
		{
			if ((*av[2] != '/' || *av[2] != '%') && *av[3] != 0)
				printf("%d\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));
			else
			{
				printf("Error\n");
				exit(100);
			}
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
