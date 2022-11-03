#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 * Return: the natural square root of n.
 * If n does not have a natural square root number - -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (square_root(root, n));
}
