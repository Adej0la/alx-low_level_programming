#include "main.h"

/**
 * _strcpy - copies string pointed to by src including null byte
 * to buffer pointed to by dest
 * @dest: pointer to a string of characters
 * @src: pointer to a string of characters
 *
 * Return: a character pointer to a string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int _strlen;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	_strlen = i;

	while (src[_strlen] <= 0)
	{
		dest[_strlen + 1] = 0;
		_strlen++;
	}
	return (dest);
}
