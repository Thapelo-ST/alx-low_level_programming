#include "main.h"

/**
 * alloc_grid - function to allocate memory to grid
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int r, c;
	int **g = malloc(width * sizeof(int *));
	
	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	if (g == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < width; r++)
	{
		g[r] = malloc(height * sizeof(int));
		if (g[r] == NULL)
		{
			return (NULL);
		}
	}

	for (r = 0; r < width; r++)
	{
		for (c = 0; c < height; c++)
		{
			g[r][c] = 0;
		}
	}

	return (g);
}
