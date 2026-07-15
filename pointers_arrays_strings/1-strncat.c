#include "main.h"
/**
* *_strncat - function that concatenates two strings.
*
*
* @dest: string we copy to
* @src: String we copy from
* @n: number to check
*
* Return: always char
*
**/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
j = 0;
while (dest[j] != '\0')
{
j++;
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[j] = src[i];
j++;
}
dest[j] = '\0';
return (dest);
}
