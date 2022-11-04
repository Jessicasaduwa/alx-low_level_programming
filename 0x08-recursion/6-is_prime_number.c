#include "main.h"

int is_divisible(int num, int d);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: the number
 * @d: the divisor
 * Return: 0 if the number is divisible
 * 1 if the number is not divisible
 */

int is_divisible(int num, int d)
{
	if (num % d == 0)
		return (0);

	if (d == num / 2)
		return (1);

	return (is_divisible(num, d + 1));
}

#include "main.h"

/**
 * is_prime_number - checks if a number is prime.
 * @n: the number
 * Return: If the integer is not prime - 0.
 * If the number is prime - 1.
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, d));
}
