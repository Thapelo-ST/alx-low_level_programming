#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is composed of digits
 * @s: the string to check
 *
 * Return: 1 if the string is composed of digits, otherwise 0
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: a pointer to a string containing the result of the multiplication
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry, res, k;
	char *result = malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			res = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1] - '0';
			carry = res / 10;
			result[i + j + 1] = res % 10 + '0';
		}
		result[i + j + 1] = carry + '0';
	}
	result[len1 + len2] = '\0';
	i = 0;
	while (result[i] == '0' && result[i + 1])
		i++;
	for (k = 0; k <= len1 + len2 - i; k++)
		result[k] = result[k + i];
	if (_strlen(result) == 0)
		result[0] = '0';
	return (result);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!is_digit(num1) || !is_digit(num2))
	{
		printf("Error\n");
		return (98);
	}
	result = mul(num1, num2);
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}
	printf("%s\n", result);
	free(result);
	return (0);
}
