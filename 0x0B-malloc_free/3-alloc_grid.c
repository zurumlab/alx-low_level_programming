#include "main.h"

/**
 * alloc_grid - function
 * @width: param
 * @height: param
 * Return: integer
 */

int **alloc_grid(int width, int height)
{
int **array;
int i = 0, j;

if (width == 0 || height == 0)
return (NULL);
array = (int **) malloc(sizeof(int *) * height);
if (array != NULL)
{
for (; j < height; j++)
{
array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] != NULL)
{
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}
else
{
while (i >= 0)
{
free(array[j]);
i--;
}
free(array);
return (NULL);
}
return (array);
}
}
else
{
return (NULL);
}
}
