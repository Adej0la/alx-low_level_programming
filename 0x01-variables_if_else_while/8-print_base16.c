#include <stdio.h>

/**
  * main - Print all the numbers of base 16
  *
  * Description: Print the numbers of base 16,
  * followed by a new line
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num_min = 48;
	int num_max = 57;
	int letter_min = 97;
	int letter_max = 102;

	while (num_min <= num_max)
	{
		putchar(num_min);
		num_min++;
	}

	while (letter_min <= letter_max)
	{
		putchar(letter_min);
		letter_min++;
	}
	putchar(10);
	return (0);
}
