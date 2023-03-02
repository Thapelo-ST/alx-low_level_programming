#include "main.h"


/**
 * cap_string - Capitalize all words of a string
 * @str: String to capitalize
 *
 * Return: Pointer to the modified string
 */

char *cap_string(char *str)
{
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
		    str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
		    ||
		    str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
		    ||
		    str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
		    ||
		    str[i - 1] == '{' || str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
