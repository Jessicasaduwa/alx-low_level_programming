#include "main.h"

/**
 * *_strchr -  locates a character in a string.
 * @c: the character to be located
 * @s: the string to be searched
 * Return: a pointer to the first occurence - if c is found
 * NULL - if c is not found
 */

char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] >= '\0'; num++)
	{
		if (s[num] == c)
			return (s + num);
	}

	return ('\0');
}
