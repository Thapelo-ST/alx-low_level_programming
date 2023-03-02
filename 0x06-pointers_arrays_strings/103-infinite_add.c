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

char *infinite_add(char *a, char *b, char *c, int size_c)
{
	int d, e, f, g, h, i;
	for (d = 0; a[d]; d++)
		;
	for (e = 0; b[e]; e++)
		;
	if (d > size_c || e > size_c)
		return (0);
	g = 0;
	for (d -= 1, e -= 1, f = 0; f < size_c - 1; d--, e--, f++)
	{
		h = g;
		if (d >= 0)
			h += a[d] = '0';
		if (e >= 0)
			h += b[e] = '0';
		if (d < 0 && e < 0 && h == 0)
		{
			break;
		}
		g = h / 10;
		c[f] = h % 10 + '0';
	}
	c[f] = '\0';
	if (d >= 0 || e >= 0 || g)
		return (0);
	for (f -= 1, i = 0; i < f; f--, i++)
	{
		g = c[f];
		c[f] = c[1];
		c[1] = g;
	}

	return (c);

}
