#include <unistd.h>

/**
 * _putchar - prints a character to standard output
 * @c: a character
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
