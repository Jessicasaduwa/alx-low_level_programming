#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string to be concatenated upon
 * @src: the source string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = src[b];

	return (dest);
}
