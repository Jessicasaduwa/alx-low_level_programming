#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - return the last digit of a randomly generated number.
 * Return: returns 0(succssful)
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	printf("Last digit of %d is ", n);
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num > 5)
	{
		printf("%d is greater than 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", n, num);
	}
	return (0);
}
