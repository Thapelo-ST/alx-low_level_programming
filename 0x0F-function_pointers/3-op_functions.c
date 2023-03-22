#include "3-calc.h"

/**
 * op_add - adds 5 functions
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: integer
 * @b: integer
 * Return: a - b;
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: first integer  number.
 * @b: first integer number.
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: integer number
 * @b: integer number
 * Return: result of a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - modulus for remainder
 * @a: integer number
 * @b: integer number
 * Return: result of a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
