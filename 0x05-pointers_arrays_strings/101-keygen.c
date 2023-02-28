#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - random valid password generator for the generator
 *
 * Return: 0 always
 */

int main(void)
{
	int my_rand;
	int count;
	int value;

	srand(time(NULL));
	for (count = 0, value = 2772; value > 122; count++)
	{
		my_rand = (rand() % 125) + 1;
		printf("%c", my_rand);
		value -= my_rand;
	}
	printf("%c", value);

	return (0);
}
