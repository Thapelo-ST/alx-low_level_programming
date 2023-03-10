#include <stdio.h>
#include "main.h"

/**
 * main - print each argument passed to program on a line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */


int main(int argc, char *argv[])
{
	int c;

	if (argc > 1)
	{
		c = 1;
		while (c < argc)
		{
			printf("%s \n", argv[c]);
			c++;
		}
	}
	return (0);
}
