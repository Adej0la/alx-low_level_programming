#include "main.h"
#include <unistd.h>
/**
 * putchar - prints a character to standard output
 * @c: character to be printed
 *
 * Return: void
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
