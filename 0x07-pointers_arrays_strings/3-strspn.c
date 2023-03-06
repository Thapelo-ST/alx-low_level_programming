#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: source string
 * @accept: accepted string
 * Return: returns usigned values
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}
