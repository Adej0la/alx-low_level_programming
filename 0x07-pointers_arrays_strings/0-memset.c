#include "main.h"

/**
 * _memset - fills the first n bytes of the memory pointed to by s
 * with constant byte b
 * @s: the memory area
 * @b: the constant byte
 * @n: number of bytes of the memory area
 *
 * Return: the modified memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j, _arrlen;

	i = 0;
	while (!s[i])
	{
		i++;
	}
	_arrlen = i;

	if (n < _arrlen)
	{
		j = 0;
		while (j < n)
		{
			s[j] = b;
			j++;
		}
	}
	return (s);
}
