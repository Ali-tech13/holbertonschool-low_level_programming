#include "main.h"
#include <stdlib.h>
/**
* *string_nconcat - function that concatenates two strings.
* @s1: string to copy to new memory
* @s2: string to copy to new memory
* @n: number of byte
* Return: pointer to char
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int j;
unsigned int len = 0;
unsigned int len1 = 0;
unsigned int taken = n;
char *arr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len] != '\0')
{
len++;
}
while (s2[len1] != '\0')
{
len1++;
}
if (taken >= len1)
taken = len1;
arr = malloc((len + taken + 1) * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
arr[i] = s1[i];
}
for (j = 0; j != taken; j++)
{
arr[i] = s2[j];
i++;
}
arr[i] = '\0';
return (arr);
}
