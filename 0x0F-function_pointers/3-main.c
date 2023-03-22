#include "3-calc.h"

/**
 * main - main function
 * @argc: arguments
 * @argv: array of args
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int num1, num2, answer;
	int (*function)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	function = get_op_func(*(argv + 2));
	if (!function)
	{
		puts("Error");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	answer = function(num1, num2);
	printf("%d\n", answer);
	return (0);
}
