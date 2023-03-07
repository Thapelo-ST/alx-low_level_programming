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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
