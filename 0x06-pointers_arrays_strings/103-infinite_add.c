#include <stdio.h>

/**
 * infinite_add - adds two numbers.
 * @n1: First number
 * @n2: Second number
 * @r: result buffer
 * @size_r: result buffer size
 *
 * Return: 0 if the result can not be stored in r,
 * otherwise a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	char *p1 = n1, *p2 = n2, *pr = r + size_r - 1;

	/* compute lengths of input numbers */
	while (*p1++)
		len1++;
	while (*p2++)
		len2++;

	/* check if result can be stored in r */
	if (len1 + len2 + 1 > size_r)
		return (0);

	/* add digits from right to left */
	*pr = '\0';
	p1 = n1 + len1 - 1;
	p2 = n2 + len2 - 1;
	while (p1 >= n1 || p2 >= n2 || carry)
	{
		sum = carry;
		if (p1 >= n1)
		{
			sum += (*p1--) - '0';
		}
		if (p2 >= n2)
		{
			sum += (*p2--) - '0';
		}
		if (pr == r)
		{
			return (0);
		}
		carry = sum / 10;
		*--pr = (sum % 10) + '0';
	}

	return (pr);
}
