#include "main.h"

/**
 * _strlen - checks string length
 * @s: a pointer to a char
 * Return: length of string.
 * Description: This function checks how long is the string and returns the
 *              length of the string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
