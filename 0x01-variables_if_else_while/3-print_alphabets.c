#include <stdio.h>

/**
  * main - Prints the alphabet in lowercase
  *
  * Description: Print the letters of the alphabet in lowercase,
  * followed by a new line
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}
