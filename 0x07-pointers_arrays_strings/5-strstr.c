#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: This is the input string
 * @needle: This is a find to locate in the string
 *
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				    break;
			        j++;
			}
		}
		i++;
	}
	return ('\0');
}
