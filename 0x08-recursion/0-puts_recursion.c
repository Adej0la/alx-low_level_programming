#include "main.h"

/**
 * _puts_recursion - recursively prints a string followed by a new line
 * @s: a string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*(s + 0));
		_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
	}
}
