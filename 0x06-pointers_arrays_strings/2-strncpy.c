#include "main.h"

/**
 * _strncpy - copies string pointed to by src including null byte
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied from src string
 *
 * Return: a concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen;
	int j;

	i = 0;
	srclen = 0;
	while (src[i++])
	{
		srclen++;
	}

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	j = srclen;
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
