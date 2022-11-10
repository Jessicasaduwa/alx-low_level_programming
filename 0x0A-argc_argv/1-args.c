#include <stdio.h>
AV

/**
 * main - prints the no. of arguments passed into program
 * @argc: Number of command line arguments
 *  @argv: Array name
 *  Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
