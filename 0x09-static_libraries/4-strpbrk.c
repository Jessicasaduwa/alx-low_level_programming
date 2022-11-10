#include "main.h"

/*
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: bytes to be searched for
 * Return: a pointer to the byte - if a set is matched
 * NULL - if no set is matched
 */

char *_strpbrk(char *s, char *accept)
{
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
				return (s);
		}
		s++;
	}
	return ('\0');
}
