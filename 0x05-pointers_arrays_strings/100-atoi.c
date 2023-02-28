#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: The string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i, v, sign;
	char c;

	i = 0;
	v = 0;
	sign = -1;
	while (s[i] != '\0')
	{
		c = s[i];
		if (c == '-')
			sign *= -1;
		else if (c >= '0' && c <= '9')
		{
			if (v < 0)
				v = v * 10 - (c - '0');
			else
			{
				v = (c - '0') * -1;
			}
			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;
		}
		i++;
	}
	if (sign < 0)
		v *= -1;
	return (v);
}
