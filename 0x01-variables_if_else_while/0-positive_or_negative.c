#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 * Return: always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive \n", n);
	}
	else if (n == 0)
	{
		printf("%i is equal to 0 \n", n);
	}
	else
	{
		printf("%i is negetive \n", n);
	}
	return (0);
}
