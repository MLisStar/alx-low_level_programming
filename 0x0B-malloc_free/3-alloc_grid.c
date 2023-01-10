#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of ints
 * @width: the width
 * @height: height
 * Return: if width, heigh <= 0 or fail - NULL
 *	Otherwise - return pointer to the 2-D array of ints
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int ht_i, wd_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (ht_i = 0; ht_i < height; ht_i++)
	{
		twoD[ht_i] = malloc(sizeof(int) * width);

		if (twoD[ht_i] == NULL)
		{
			for (; ht_i >= 0; ht_i--)
				free(twoD[ht_i]);

			free(twoD);
			return (NULL);
		}
	}

	for (ht_i = 0; ht_i < height; ht_i++)
	{
		for (wd_i = 0; wd_i < width; wd_i++)
			twoD[ht_i][wd_i] = 0;
	}

	return (twoD);
}
