#include "main.h"
#include <stdlib.h>
/**
* **alloc_grid - function that returns a pointer to
* a 2 dimensional array of integers.
*
* @width: coulmn size
* @height: row size
*
* Return: pointer to allocated grid, or NULL on failure
*
**/
int **alloc_grid(int width, int height)
{
int i;
int j;
int **arr;
if (width <= 0 || height <= 0)
{
return (NULL);
}
arr = malloc(height * sizeof(int *));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = malloc(width * sizeof(int));
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(arr[j]);
}
free(arr);
return (NULL);
}
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
