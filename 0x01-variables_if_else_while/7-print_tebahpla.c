#include <stdio.h>

#define LOWER 97 /* Lower limit of alphabet */
#define UPPER 122 /* Upper limit of alphabet */
/**
  * main - Print the lowercase alphabet in reverse
  *
  * Description: Print the lowercase alphabet in reverse,
  * followed by a new line
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = UPPER; i >= LOWER; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
