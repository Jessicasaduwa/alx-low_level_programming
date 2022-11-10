#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: The string to be duplicated.
 * Return: a pointer to the duplicated string.
 *
 * NULL if str == NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '0\n)
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		duplicate[j] = str[j];
	return (duplicate);
}
