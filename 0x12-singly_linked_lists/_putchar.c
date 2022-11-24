#include "lists.h"

/**
 * _putchar - prints a input character to standard output
 * @c: character to be printed
 *
 * Return: 1 i.e. the number of bytes handled successfully
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
