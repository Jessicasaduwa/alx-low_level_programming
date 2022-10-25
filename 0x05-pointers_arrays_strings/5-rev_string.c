#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int c = 0;
	char rv = s[0];
	int l;

	while (s[c] != '\0')
		c++;

	for (l = 0; l < c; l++)
	{
		c--;
		rv = s[l];
		s[l] = s[c];
		s[c] = rv;
	}
}
