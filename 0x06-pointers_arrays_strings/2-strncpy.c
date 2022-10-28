#include "main.h"

/**
 * _strncpy - copies a string with n
 * @dest: buffer copying the string
 * @src: Source string
 * @n: number of char to be copied from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
