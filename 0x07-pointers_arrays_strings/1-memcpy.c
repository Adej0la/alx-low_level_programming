#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to be copied to
 * @src: src to be copied from
 * @n: number of bytes to copy
 *
 * Description: function copies n bytes from a memory area src to memory area
 * dest
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
