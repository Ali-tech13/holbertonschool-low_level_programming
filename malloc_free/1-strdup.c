#include "main.h"
#include <stdlib.h>
/**
* *_strdup - function that returns a pointer to
*  a newly allocated space in memory
* which contains a copy of the string given as a parameter.
*
* @str: string to copy
*
* Return: char pointer if found - NULL if not
**/
char *_strdup(char *str)
{
int i;
char *arr;
int len = 0;
if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
arr = malloc((len + 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < len + 1; i++)
{
arr[i] = str[i];
}
return (arr);
}
