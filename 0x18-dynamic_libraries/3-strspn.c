#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: The number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
			{
				bytes++;
				break;
			}
			else if (accept[num + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
