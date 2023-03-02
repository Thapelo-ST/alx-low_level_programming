#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int st1 = _strlen(s1);
	int st2 = _strlen(s2);
	int big = 0;

	if (st1 > st2)
	{
		big = st1;
	}
	else
	{
		big = st2;
	}

	int cmp = 0;

	while (big > 1 && (*s1 != '\0' && *s2 != '\0'))
	{
		if (s1[big - 1] == s2[big - 1])
		{
			big--;
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}

	return (*s1 - *s2);
}
