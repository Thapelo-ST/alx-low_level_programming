#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int password[5];
	int i;

	srand(time(NULL));

	for (i = 0; i < 5; i++) {
		password[i] = rand() % 10;
	}

	printf("%d%d%d%d%d\n", password[0], password[1], password[2], password[3], password[4]);

	return (0);
}
