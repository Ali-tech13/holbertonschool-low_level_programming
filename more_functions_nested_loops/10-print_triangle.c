#include "main.h"
/**
* print_triangle - function that prints a triangle, followed by a new line.
*
* @size: number to check
*
*
**/
void print_triangle(int size)
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
