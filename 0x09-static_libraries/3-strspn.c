#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: source string
 * @accept: accepted string
 * Return: returns usigned values
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (counter);
}
