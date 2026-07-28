#include "function_pointers.h"
/**
* int_index -  function that searches for an integer.
*
* @array: an array of pointer int
* @size: number of element in the array
* @cmp: pointer to function
*
* Return: -1 if no element match - otherwise index of element
**/
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
return (-1);
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i] != 0))
{
return (i);
}
}
return (-1);
}
