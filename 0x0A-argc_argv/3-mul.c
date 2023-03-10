#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc - 1 == 2)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%i\n", mul);
		return (0);
	}

	else
	{
		printf("error \n");
		return (1);
	}
}
