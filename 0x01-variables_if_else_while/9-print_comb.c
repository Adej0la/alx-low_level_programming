#include <stdio.h>

/**
  * main - Print all possible combos of single digit numbers
  *
  * Description: Numbers must be delimited by ',', followed
  * by a space
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int min_num = 48;
	int max_num = 57;

	while (min_num <= max_num)
	{
		putchar(min_num);

		if (min_num != max_num)
		{
			putchar(44);
			putchar(32);
		}

		min_num++;
	}

	putchar(10);

	return (0);
}
