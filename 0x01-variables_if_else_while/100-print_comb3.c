#include <stdio.h>

/**
  * main - Print all possible combos of single digit numbers
  *
  * Description: Numbers must be delimited by ',', followed
  * by a space
  *
  * Return: Always 0 (Success)
  */
#define MIN_NUM 48 /* ascii decimal for 0 */
#define MAX_NUM 57 /* ascii decimal for 9 */

int main(void)
{
	int i;
	int j;

	for (i = MIN_NUM; i <= MAX_NUM; i++)
	{
		for (j = i + 1; j <=  MAX_NUM; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
			}
			if (i < MAX_NUM - 1 || j < MAX_NUM)
			{
				putchar(44);
				putchar(32);
			}
		}
	}


	putchar(10);

	return (0);
}
