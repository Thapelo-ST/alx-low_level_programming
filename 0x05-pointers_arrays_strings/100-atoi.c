#include <stdio.h>

/**
  * _atoi _function that coinverts string into integer
  * @s: the string to be converted
  * Return: integer
  */

int _atoi(char *s)
{
	int i, val, sign;
	char c;

	i = 0;
	val = 0;
	sign = -1;

	while (s[1] != '\0')
	{
		c = s[i];
		if (c == '-')
			sign *= -1;
		else if (c >= '0' && c <= '9')
		{
			if (val < 0)
			{
				val = val * 10 - (c - '0');
			}
			else
			{
				val = (c - '0') * -1;
			}
			if (s[i +1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}
	if (sign < 0)
	{
		val *= -1;
	}
	return (val);
}
