#include "function_pointers.h"

/**
 * main - generates opcodes of its own main function
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: the opcodes
 */

int main(int argc, char **argv)
{
	int a, number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < number; a++)
	{
		printf("%02hhx", ((char *)main)[a]);
		if (a == (number - 1))
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
