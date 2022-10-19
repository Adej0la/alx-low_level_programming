#include <stdio.h>
#include "main.h"

/**
 * main - Entry point into program
 * Return: 0
 */
int main(void)
{
	char txt[8] = "_putchar";
	int txt_arr_size = sizeof(txt) / sizeof(txt[0]);
	int i;

	for (i = 0; i < txt_arr_size; i++)
	{
		_putchar(txt[i]);
	}

	_putchar(10);
	return (0);
}
