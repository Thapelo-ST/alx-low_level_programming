#include <stdio.h>
/**
 * main - Entry point for finding Fibonacci numbers
 *
 * This program finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and a space.
 *
 * Return: Always 0
 *
 * print_fibonacci - prints the first n Fibonacci numbers
 *
 * @n: the number of Fibonacci numbers to print
 *
 * This function prints the first n Fibonacci numbers, starting with 1 and 2,
 * followed by a new line. The numbers should be separated by comma, followed
 * by a space.
 */

void print_fibonacci(int n)
{
	int a = 1, b = 2, c, count = 0;

	printf("%d, %d", a, b);

	while (count < n - 2)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		count++;
	}

	printf("\n");
}

int main(void)
{
	print_fibonacci(98);
	return (0);
}
