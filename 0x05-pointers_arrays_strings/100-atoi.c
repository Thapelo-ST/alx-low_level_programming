int _atoi(char *s)
{
	int sign = 1, r = 0, i = 0;

	/*skiping white spaces*/
	while (s[i] == ' ')
		i++;

	/*handle sign*/
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/*handle digits*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		/*check for overflow*/
		if (r > INT_MAX / 10 || (r == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			/*overflow detected*/
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}

		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (sign * r);
}
