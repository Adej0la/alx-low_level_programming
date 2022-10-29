#include "main.h"

/**
 * _stnrcat - appends the src string to the dest string,
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied from src string
 *
 * Description: _strcat will overwrite the terminating null byte at end of
 * source string and adds a terminating null byte
 * Return: a concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int _destlen;

	i = 0, _destlen = 0;
	while (dest[i++])
	{
		_destlen++;
	}

	j = 0;
	while (src[j] != 0 && j < n)
	{
		dest[_destlen++] = src[j];
		j++;
	}

	return (dest);
}
