#include "main.h"
/**
* *_strncpy - function that copies a string.
*
* @dest: string we copy to
* @src: string we copy from
* @n: number to check
*
* Return: char
*
**/
char *_strncpy(char *dest, char *src, int n)
{
int i;
int len;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
}
