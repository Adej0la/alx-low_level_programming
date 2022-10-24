#include "main.h"
#include <unistd.h>

/**
 * print_numbers - prints the character
 * @c: a character
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
