#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int remain  = n % 10;

	if (remain < 0)
	{
		remain = -(remain);
		_putchar(remain + '0'');
		return (remain);
	}
	else
	{
		_putchar(remain + '0');
		return (remain);
	}

	return (0);
}
