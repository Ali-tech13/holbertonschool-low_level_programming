#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - function that let the function to pointer
* do whatever he dose to every element to the array
*
* @array: pointer to array
* @size: size of array
* @action: function to pointer
*
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
