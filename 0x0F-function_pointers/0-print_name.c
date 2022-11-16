#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name of the person
 * @f: the function that prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
