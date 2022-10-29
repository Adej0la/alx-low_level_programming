#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * @dest: destination string
 * @src: source string
 *
 * Description: _strcat will overwrite the terminating null byte at end of
 * source string and adds a terminating null byte
 * Return: a concatenated string
 */
char *_strcat(char *dest, char *src)
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
	while (src[j] != 0)
	{
		dest[_destlen++] = src[j];
		j++;
	}

	dest[_destlen++] = 0;
	return (dest);
}
