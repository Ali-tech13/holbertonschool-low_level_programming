#include "main.h"
/**
* print_square - function that prints a square, followed by a new line.
* @size: size to consider
*
*
* Return: void
*
**/
void print_square(int size)
{
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
