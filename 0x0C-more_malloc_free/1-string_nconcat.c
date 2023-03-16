#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 *
 * Return: pointer to concatenate string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *scon;

	len1 = len2 = 0;
	/*check if string is null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*getting lengnth of both strings*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	/*checking if len of s2 is greater than n*/
	if (len2 <= n)
		n = len2;
	/*allocating memory and checking if its null*/
	scon = malloc(sizeof(char) * n + len1 + 1);
	if (scon == NULL)
	{
		return (NULL);
	}
	/*concatinating string*/
	for (i = 0; s1[i] != '\0' ; i++)
	{
		scon[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		scon[i + len1] = s2[i];
	}
	scon[i + len1] = '\0';
	return (scon);
}
