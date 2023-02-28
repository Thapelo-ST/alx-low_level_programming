#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a pointer to the first character in the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	/*int len = 0;*/
	char *start = s;
	char *end = s;

	/* finding the end of the string */
	while (*end != '\0')
	{
		end++;
	}

	/* moving the end pointer to the last character in the string */
	end--;

	/* swaping characters from both ends of the string */
	while (start < end)
	{
		char temp = *start;

		*start = *end;
		*end = temp;

		/* now move the pointers towards the middle of the string */
		start++;
		end--;
	}
}
