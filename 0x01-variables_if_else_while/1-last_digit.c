#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 * Return: always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
		    int n, lst_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst_dgt = n % 10;

	if (lst_dgt > 5)
	{
		printf("Last digit of %i is %i and is grater than 5", n, lst_dgt);
	}
	else if (lst_dgt == 0)
	{
		printf("Last digit of %i is %i and is 0 \n", n, lst_dgt);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lst_dgt);
	}
	return (0);
}
