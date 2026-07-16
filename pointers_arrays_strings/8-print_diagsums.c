#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: pointer to the square matrix
 * @size: size of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int left_sum = 0;
	int right_sum = 0;

	for (i = 0; i < size; i++)
	{
		left_sum += a[i * size + i];
		right_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", left_sum, right_sum);
}
