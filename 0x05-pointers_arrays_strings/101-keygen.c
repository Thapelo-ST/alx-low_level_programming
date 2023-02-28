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
	int password[5]; // assume password is 5 digits long
	int i;

	srand(time(NULL)); // seed the random number generator with current time

	// generate a random digit between 0 and 9 for each character in the password
	for (i = 0; i < 5; i++) {
		password[i] = rand() % 10;
	}

	// print the password
	printf("%d%d%d%d%d\n", password[0], password[1], password[2], password[3], password[4]);

	return 0;
}
