#include "main.h"
#include <stdlib.h>
/**
* *_calloc - function that allocates memory for an array, using malloc.
* @nmemb: number of element
* @size: byte
*
*
* Return: void
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i;
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < nmemb * size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
