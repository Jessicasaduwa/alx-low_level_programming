#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int i = *b;
	int j = *a;
	*a = i;
	*b = j;
}
