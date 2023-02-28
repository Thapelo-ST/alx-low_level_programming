#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to string to convert
 *
 * Return: integer value of string
 */

#include <limits.h>

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int digit;
	int min = INT_MIN / 10;
	int max = INT_MAX / 10;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
		s++;
	}

	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';

		if (sign == 1 && (num > max || (num == max && digit > INT_MAX % 10)))
		{
			return (INT_MAX);
		}

		if (sign == -1 && (num < min || (num == min && digit > -(INT_MIN % 10))))
		{
			return (INT_MIN);
		}

		num = num * 10 + sign * digit;
		s++;
	}

	return (num);
}
