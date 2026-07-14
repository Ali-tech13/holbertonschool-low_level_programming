#include "main.h"
/**
* swap_int - Write a function that swaps the values of two integers.
*
* @a: number to swap
* @b: number to swap
* Return: void
**/
void swap_int(int *a, int *b)
{
int tmp;
tmp = 0;
tmp = *a;
*a = *b;
*b = tmp;
}
