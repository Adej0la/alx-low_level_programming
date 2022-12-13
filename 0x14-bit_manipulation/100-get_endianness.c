#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endian, or 0 if big endian
 */
int get_endianness(void)
{
	int n = 1;
	char *s = (char *)&n;

	return (*s);
}
