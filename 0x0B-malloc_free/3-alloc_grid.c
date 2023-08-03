#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2d array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to a 2d array populated by 0
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int rows, cols;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
		return (NULL);
	for (rows = 0; rows < height; rows++)
	{
		matrix[rows] = malloc(width * sizeof(int));
		if (matrix[rows] == NULL)
		{
			free(matrix);
			for (cols = 0; cols <= rows; cols++)
				free(matrix[cols]);
			return (NULL);
		}
	}
	for (rows = 0; rows < height; rows++)
	{
		for (cols = 0; cols < width; cols++)
			matrix[rows][cols] = 0;
	}
	return (matrix);
}
