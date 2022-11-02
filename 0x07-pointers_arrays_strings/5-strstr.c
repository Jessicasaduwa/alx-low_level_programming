#include "main.h"

/**
 * *_strstr - locates a substring.
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: a pointer to the beginning of the located substring - if
 * the substring is located
 *
 * NULL - if the substring is not located.
 */

char *_strstr(char *haystack, char *needle)
{
	int num;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		num = 0;

		if (haystack[num] == needle[num])
		{
			do {
				if (needle[num + 1] == '\0')
					return (haystack);

				num++;
			} while (haystack[num] == needle[num]);
		}
		haystack++;
	}
	return ('\0');
}
