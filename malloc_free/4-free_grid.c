#include "main.h"
#include <stdlib.h>
/**
* free_grid - function that frees a 2 dimensional grid previously
* created by your alloc_grid function.
*
* @grid: array that we will free
* @height: number of rows
*
* Return: void
**/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
