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

	for (i = 0; str[i]; i++)
		j++;

	duplicate = malloc(sizeof(char) * (j + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[j] = '\0';

	return (duplicate);
}
