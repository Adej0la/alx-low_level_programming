#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: another string to be compared
 *
 * Return: an integer < 0 if s1 is less than s2,
 * an integer = 0 if s1 and s2 are equal,
 * an integer > 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int _longstr;
	int _str1len;
	int _str2len;

	i = 0;
	_str1len = 0;
	_str2len = 0;
	while (s1[i++])
	{
		_str1len++;
	}

	i = 0;
	while (s2[i++])
	{
		_str2len++;
	}

	_longstr = _str2len;
	if (_str1len > _str2len)
	{
		_longstr = _str1len;
	}

	i = 0;
	while (i < _longstr)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
