#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
			size++, j++;
		size++, i++;
	}
	size++;
	str = (char *)malloc(sizeof(char) * size);
	if (str == 0)
	{
		free(str);
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
			str[k] = av[i][j], j++, k++;
		str[k] = '\n', k++, i++;
	}
	str[k] = 0;
	return (str);
}
