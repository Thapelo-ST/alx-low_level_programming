#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to string to convert
 *
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			/* do nothing */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			if ((s[i + 1] < '0' || s[i + 1] > '9') && s[i + 1] != '\0')
			{
				break;
			}
		}
		else if (result > 0)
		{
			/* stop parsing once we've found a non-digit after a digit */
			break;
		}
		i++;
	}

	return (sign * result);
}
