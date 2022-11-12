#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of a certain no of elements.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: a pointer to the allocated memory.
 *
 * NULL - If nmemb = 0, size = 0, or the function fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *number;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	number = mem;

	for (n = 0; n < (size * nmemb); n++)
		number[n] = '\0';

	return (mem);
}
