#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int c, j, k, m;

	for (c = 0; s1[c] != '\0'; c++)
	{

	}
	for (j = 0; s2[j] != '\0'; j++)
	{

	}
	k = c + j;
	s3 = malloc(k + 1);

	if (s3 == NULL)
		return (NULL);

	for (c = 0; s1[c] != '\0'; c++)
	{
		s3[c] = s1[c];
	}
	m = 0;
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[c + m] = s2[j];
		m++;
	}

	s3[k] = '\0';
	return (s3);
}
