#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - prints a character to standard output
 * @c: a character
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - prints the base file
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	i = 0;
	while (__FILE__[i])
	{
		_putchar(__FILE__[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
