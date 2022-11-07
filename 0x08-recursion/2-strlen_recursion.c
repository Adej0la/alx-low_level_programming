#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: the string which its length is to be returned
 *
 * Return: the integer length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return 0;
	}
	return (1  + _strlen_recursion((s + 1)));
}
