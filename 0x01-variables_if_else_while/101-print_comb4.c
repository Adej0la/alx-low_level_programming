#include <stdio.h>

#define MIN_NUM 48
#define MAX_NUM 57

/**
 * main - Prints all possible combination of three digits
 *
 * Description: Prints only the smallest combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = MIN_NUM; i <= MAX_NUM; i++)
	{
		for (j = i + 1; j <= MAX_NUM; j++)
		{
			for (k = j + 1; k <= MAX_NUM; k++)
			{
				if (i < j && i < k)
				{
					putchar(i);
				}
				if (j > i && j < k)
				{
					putchar(j);
				}
				if (k > i && k > j)
				{
					putchar(k);
				}
				if (i < MAX_NUM - 2 || j < MAX_NUM - 1 || k < MAX_NUM)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
