#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: address of str
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
