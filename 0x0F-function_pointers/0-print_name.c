#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: The name to be printed.
 * @f: A pointer to the function that prints a name.
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
