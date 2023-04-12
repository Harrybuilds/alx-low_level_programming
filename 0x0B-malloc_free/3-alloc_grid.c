#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to 2d array of intergers
 *@width: width of the 2d array to be passed
 *@height: height(column) of the 2d array to be passed
  *Return: returns a pointer to an integer
  */
int **alloc_grid(int width, int height)
{
	int  **g;
	int i, j;

	if (height < 0  || width < 0)
		return (NULL);

	g = malloc(height * sizeof(int *));

	if (g == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (i = 1; i >= 0; i++)
			{
				free(g[i]);
			}
			free(g);
			return ('\0');
		}
		i++;
	}


	for (i = 0; j < width; j++)
	{
		g[i][j] = 0;
	}

	return (g);

}
